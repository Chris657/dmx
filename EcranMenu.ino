void EcranMenu(short compteurMenu, short menu) // gestion des textes des menus
{
  screen.fillScreen(background);
  COLOR = WHITE;
  switch (menu)
  {
    case 1:
      AfficheMenuUn(menu, compteurMenu);
      break;

    case 2:
      AfficheMenuDeux(menu, compteurMenu);
      break;

    case 3:
      AfficheMenuTrois(menu, compteurMenu);
      break;

    case 4:
      AfficheMenuQuatre(menu, compteurMenu);
      break;

    case 5:
      AfficheMenuCinq(menu, compteurMenu);
      break;

    case 6:
      AfficheMenuSix(menu, compteurMenu);
      break;

    case 7:
      AfficheMenuSept(menu, compteurMenu);
      break;
  }
}


void  AfficheMenuUn(short menu, short compteurMenu) // gestion du texte du menu 1
{
  screen.setTextSize(3);
  screen.setCursor(/*x=*/20,/*y=*/10);
  screen.setTextColor(text);
  screen.print("DMX DEVICES");

  screen.setTextSize(2);
  screen.setCursor(/*x=*/30,/*y=*/50);
  screen.print("DEVICE#1:");
  if (listDevice[0]->GetChannel(0) != NULL)
  {
    screen.fillRect( 140, 50 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/140,/*y=*/50);
    screen.print(listDevice[0]->GetIndex());
  }

  screen.setCursor(/*x=*/30,/*y=*/75);
  screen.print("DEVICE#2:");
  if (listDevice[1]->GetChannel(0) != NULL)
  {
    screen.fillRect( 140, 75 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/140,/*y=*/75);
    screen.print(listDevice[1]->GetIndex());
  }
  screen.setCursor(/*x=*/30,/*y=*/100);
  screen.print("DEVICE#3:");
  if (listDevice[2]->GetChannel(0) != NULL)
  {
    screen.fillRect( 140, 100 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/140,/*y=*/100);
    screen.print(listDevice[2]->GetIndex());
  }

  screen.setCursor(/*x=*/30,/*y=*/125);
  screen.print("DEVICE#4:");
  if (listDevice[3]->GetChannel(0) != NULL)
  {
    screen.print(listDevice[3]->GetIndex());
    screen.fillRect( 140, 125 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/140,/*y=*/125);
  }

  screen.setCursor(/*x=*/30,/*y=*/150);
  screen.print("DEVICE#5:");
  if (listDevice[4]->GetChannel(0) != NULL)
  {
    screen.fillRect( 140, 150 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/140,/*y=*/150);
    screen.print(listDevice[4]->GetIndex());
  }

  screen.setCursor(/*x=*/30,/*y=*/175);
  screen.print("DEVICE#6:");
  if (listDevice[5]->GetChannel(0) != NULL)
  {
    screen.fillRect( 140, 175 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/140,/*y=*/175);
    screen.print(listDevice[5]->GetIndex());
  }

  screen.setCursor(/*x=*/30,/*y=*/200);
  screen.print("DEVICE#7:");
  if (listDevice[6]->GetChannel(0) != NULL)
  {
    screen.fillRect( 140, 200 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/140,/*y=*/200);
    screen.print(listDevice[6]->GetIndex());
  }

  screen.setCursor(/*x=*/30,/*y=*/225);
  screen.print("DEVICE#8:");
  if (listDevice[7]->GetChannel(0) != NULL)
  {
    screen.fillRect( 140, 225 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/140,/*y=*/225);
    screen.print(listDevice[7]->GetIndex());
  }

  screen.setCursor(/*x=*/210,/*y=*/225);
  screen.print("OK");

}

void  AfficheMenuDeux(short menu, short compteurMenu) // gestion du texte du menu 1
{
  screen.setTextSize(3);
  screen.setCursor(/*x=*/30,/*y=*/10);
  screen.setTextColor(text);
  screen.print("DMX CONFIG");
  screen.setTextSize(2);

  screen.setCursor(/*x=*/30,/*y=*/50);
  screen.print("DEVICE NUM:");
  if (listDevice[0]->GetID() != NULL)
  {
    screen.fillRect( 165, 50 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/165,/*y=*/50);
    screen.print(listDevice[0]->GetID());
  }

  screen.setCursor(/*x=*/30,/*y=*/75);
  screen.print("DEVICE CHANNEL:");

  screen.setCursor(/*x=*/30,/*y=*/125);
  screen.print("ENVELOPE:");

  screen.setCursor(/*x=*/30,/*y=*/150);
  screen.print("CV:");

  screen.setCursor(/*x=*/210,/*y=*/225);
  screen.print("OK");

}

void  AfficheMenuTrois(short menu, short compteurMenu) // gestion du texte du menu 1
{
  screen.setTextSize(3.5);
  screen.setCursor(/*x=*/20,/*y=*/10);
  screen.setTextColor(text);
  screen.print("EDIT PRESET");

  screen.setCursor(/*x=*/0,/*y=*/50);
  screen.setTextSize(2);
  screen.print("  PRESET:");  
  if (listPreset[0]->GetID() != NULL)
  {
    screen.fillRect( 120, 50 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/120,/*y=*/50);
    screen.print(listPreset[0]->GetID());
  }

  screen.setCursor(/*x=*/0,/*y=*/70);
  screen.print("  NOTE:");
  if (listPreset[0]->GetNoteID(0) != NULL)
  {
    screen.fillRect( 100, 70 ,  40,  15,  BLACK);
    screen.setTextColor(COLOR);
    screen.setCursor(/*x=*/100,/*y=*/70);
    screen.print(listPreset[0]->GetNoteID(0));
  }

  screen.setCursor(/*x=*/0,/*y=*/120);
  screen.print("  TRIGGER GATE:");

  screen.setCursor(/*x=*/0,/*y=*/140);
  screen.print("  MODE:");
  screen.setCursor(/*x=*/100,/*y=*/140);
  screen.print(Mode[0]);

  screen.setCursor(/*x=*/0,/*y=*/160);
  screen.print("  ENV1 A:");

  screen.setCursor(/*x=*/160,/*y=*/160);
  screen.print("R:");

  screen.setCursor(/*x=*/0,/*y=*/180);
  screen.print("  ENV2 A:");

  screen.setCursor(/*x=*/160,/*y=*/180);
  screen.print("R:");


  screen.fillTriangle(/*GaucheX*/120,/*GaucheY*/ 210,/*DroiteX*/ 140,/*DroiteY*/ 210,/*pointeX*/130,/*pointeY*/ 230, WHITE);
}


void  AfficheMenuQuatre(short menu, short compteurMenu) // gestion du texte du menu 3
{
  screen.setTextColor(text);
  screen.fillTriangle(/*GaucheX*/115,/*GaucheY*/ 15,/*DroiteX*/ 125,/*DroiteY*/ 15,/*pointeX*/120,/*pointeY*/ 5, WHITE);

  screen.setTextSize(2);
  screen.setCursor(/*x=*/30,/*y=*/25);
  screen.print("DMX DEVICE:");

  screen.setCursor(/*x=*/30,/*y=*/50);
  screen.print("CH1:");
  screen.setCursor(/*x=*/150,/*y=*/50);
  screen.print("CH2:");
  screen.setCursor(/*x=*/30,/*y=*/70);
  screen.print("CH3:");
  screen.setCursor(/*x=*/150,/*y=*/70);
  screen.print("CH4:");
  screen.setCursor(/*x=*/30,/*y=*/90);
  screen.print("CH5:");

  screen.setCursor(/*x=*/150,/*y=*/90);
  screen.print("CH6:");
  screen.setCursor(/*x=*/30,/*y=*/110);
  screen.print("CH7:");
  screen.setCursor(/*x=*/150,/*y=*/110);
  screen.print("CH8:");

  screen.setCursor(/*x=*/30,/*y=*/130);
  screen.print("CH9:");
  screen.setCursor(/*x=*/150,/*y=*/130);
  screen.print("C10:");

  screen.setCursor(/*x=*/30,/*y=*/150);
  screen.print("C11:");
  screen.setCursor(/*x=*/150,/*y=*/150);
  screen.print("C12:");

  screen.setCursor(/*x=*/30,/*y=*/170);
  screen.print("C13:");
  screen.setCursor(/*x=*/150,/*y=*/170);
  screen.print("C14:");

  screen.setCursor(/*x=*/30,/*y=*/190);
  screen.print("C15:");
  screen.setCursor(/*x=*/150,/*y=*/190);
  screen.print("C16:");

  screen.fillTriangle(/*GaucheX*/115,/*GaucheY*/ 220,/*DroiteX*/ 125,/*DroiteY*/ 220,/*pointeX*/120,/*pointeY*/ 230, WHITE);
}

void  AfficheMenuCinq(short menu, short compteurMenu) // gestion du texte du menu 3
{
  screen.setTextColor(text);
  screen.fillTriangle(/*GaucheX*/115,/*GaucheY*/ 15,/*DroiteX*/ 125,/*DroiteY*/ 15,/*pointeX*/120,/*pointeY*/ 5, WHITE);

  screen.setTextSize(2);
  screen.setCursor(/*x=*/30,/*y=*/30);
  screen.print("DMX DEVICES");

  screen.setTextSize(2);
  screen.setCursor(/*x=*/30,/*y=*/50);
  screen.print("DMX CONFIG");

  screen.setTextSize(2);
  screen.setCursor(/*x=*/30,/*y=*/90);
  screen.print("MIDI CONFIG");

  screen.setTextSize(2);
  screen.setCursor(/*x=*/30,/*y=*/130);
  screen.print("COPY PRESET");

}

void  AfficheMenuSix(short menu, short compteurMenu) // gestion du texte du menu 2
{
  screen.setTextSize(3);
  screen.setCursor(/*x=*/20,/*y=*/10);
  screen.setTextColor(text);
  screen.print("MIDI CONFIG");

  screen.setTextSize(2);
  screen.setCursor(/*x=*/30,/*y=*/70);
  screen.print("INPUT:");
  screen.print("JACK:");

  screen.setTextSize(2);
  screen.setCursor(/*x=*/30,/*y=*/100);
  screen.print("CHANNEL:");
  screen.print("OMNI");

  screen.setCursor(/*x=*/210,/*y=*/225);
  screen.print("OK");
}

void  AfficheMenuSept(short menu, short compteurMenu) // gestion du texte du menu 1
{
  screen.setTextSize(3);
  screen.setCursor(/*x=*/20,/*y=*/10);
  screen.setTextColor(text);
  screen.print("COPY PRESET");

  screen.setCursor(/*x=*/20,/*y=*/40);
  screen.setTextSize(2.5);
  screen.print(" COPY PRESET No:");
  screen.setTextSize(3.5);
  screen.setCursor(/*x=*/50,/*y=*/100);
  screen.setTextColor(text);
  screen.print("1_PRESET");
  screen.setCursor(/*x=*/20,/*y=*/115);
  screen.setTextSize(2.5);
  screen.print(" ON PRESET No:");
  screen.setTextSize(3.5);
  screen.setCursor(/*x=*/50,/*y=*/170);
  screen.setTextColor(text);
  screen.print("2_BLANK");

  screen.setTextSize(2);
  screen.setCursor(/*x=*/35,/*y=*/220);
  screen.setTextColor(text);
  screen.print("BACK");
  screen.setTextSize(2);
  screen.setCursor(/*x=*/180,/*y=*/220);
  screen.setTextColor(text);
  screen.print("COPY");

  screen.setCursor(/*x=*/120,/*y=*/70);
}
