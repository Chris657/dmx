/*
  ! @Library to download Device.h

   @Project P2201_DMX_Master-of-light
   @author Christopher Ristic & Nicolas Bucher
   @Supported on Mega2560
   @version V1.0
   @date 14.06.2022
   @git : https://github.com/Chris657/dmx.git
*/

#include "DFRobot_GDL.h"
#include <SD.h>
#include <SPI.h>
#include "Device.h"

static const uint16_t BLACK = 0x0000;
static const uint16_t WHITE = 0xFFFF;
static const uint16_t RED = 0xFB00;
static uint16_t COLOR;

//Encoder Pin

#define pinA 2
#define pinB 3
#define pinS 27

//Screen Pin

#define TFT_DC  25
#define TFT_CS  24
#define TFT_RST 26
#define TFT_SD  28

//Encoder

bool etatA ;
bool etatB ;
bool dernierEtatA ;
bool oldSwitch;
bool boutonSwitch;

// gestion du menu

short compteurMenu = 0;
short oldCompteurMenu = 0;
short menu = 1;
short oldMenu = 0;
static const uint16_t text =  WHITE;
static const uint16_t background = BLACK;

//gestion sous menu

bool sousMenuActivated = false;
bool bloqueSousMenuSecondaire = false;
short compteurSousMenu = 0;
short valeurCalcul = 0;
short count = 0;
short maxSousMenu = 16;
short choixChannel = 0;
short oldValue = -10;


//varibles et tableaux

Preset *listPreset[20];
Note *listNote[32];
Device *listDevice[8];
short choixDevice;
String Mode[2] = {"Hold", "AR"};
String CV[4] = {"CV1", "CV2", "CV3", "CV4"};
short listChannel[3][16]; //[0][] = channel | [1][] = envelop | [2][] = CV
short index = 0;

DFRobot_ST7789_240x240_HW_SPI screen(/*dc=*/TFT_DC,/*cs=*/TFT_CS,/*rst=*/TFT_RST);

void setup() {

  Serial.begin(115200);

  pinMode(pinA, INPUT_PULLUP);
  pinMode(pinB, INPUT_PULLUP);
  pinMode(pinS, INPUT);

  attachInterrupt(digitalPinToInterrupt(pinA), ChangementA, RISING);
  attachInterrupt(digitalPinToInterrupt(pinB), ChangementB, CHANGE);


  for (short i = 0; i <= 15; i++) //  On met 0 dans le tableau listChannel channel
  {
    listChannel[0][i] = 0;
  }
  for (short i = 0; i <= 15; i++) //  On met 0 dans le tableau listChannel Envelop
  {
    listChannel[1][i] = 0;
  }
  for (short i = 0; i <= 15; i++) //  On met 0 dans le tableau listChannel CV
  {
    listChannel[2][i] = 0;
  }


  for (short i = 0; i <= 7; i++)
  {
    listDevice[i] = new Device(i + 1); // crée 8 objets Device
    listDevice[i]->SetListChannelDefault(listChannel); // envoyer le tableau a l'objet
  }

  for (short j = 0; j < 32; j++) // crée 32 objets Note
  {
    listNote[j] = new Note(j + 1);
  }

  for (short i = 0; i < 20; i++) // crée 20 objets Preset en inserant a chacun le tableau listNote
  {
    listPreset[i] = new Preset(i + 1, listNote);
  }


  dernierEtatA = digitalRead(pinA);  // état de A au setup
  
  screen.begin();

  //SD
  /*while (1)
    {
    if (SD.begin(TFT_SD))
    {
      Serial.println("initialization done.");
      break;
    }
    Serial.println("initialization failed!");
    }*/

}



void loop() {

  if (menu != oldMenu) // évite d'afficher en continue le même menu
  {
    oldMenu = menu;
    EcranMenu(compteurMenu, menu); // gestion des textes des menus
    PointDeSelection(text, background);   //affichage du point de sélection
  }

  MinMaxSelect(); //definition des sélections min et max dans chaque menu

  if (compteurMenu != oldCompteurMenu) // évite d'afficher sans arrêt la sélection
  {
    oldCompteurMenu = compteurMenu;
    PointDeSelection(text, background);   //affichage du point de sélection
  }

  while (sousMenuActivated) // partie des sous menus
  {
    SousMenu();
    if (!sousMenuActivated) //reset variables
    {
      compteurSousMenu = -10;
      oldValue = -10;
    }
  }

  BoutonMenuSuivant(); // gestion du bouton switch de l'encodeur, changement de menu et set les tableaux selon sélection

}
