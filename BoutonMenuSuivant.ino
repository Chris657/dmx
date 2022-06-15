void BoutonMenuSuivant() // passer au menu suivant en appuyant sur l'encodeur
{
  delay(50); // nécessaire pour éviter les rebonds
  
  boutonSwitch = digitalRead(pinS); // lecture du bouton switch de l'encodeur
  
  if (boutonSwitch != oldSwitch)
  {
    oldSwitch = boutonSwitch;

    if (boutonSwitch % 2 == 0) // seulement si front montant
    {
      switch (menu) // quel menu ?
      {
        case 1:

          if (!sousMenuActivated && compteurMenu != 0)
          {
            sousMenuActivated = true;
            COLOR = WHITE;
          }
          else if (!sousMenuActivated && compteurMenu == 0)
          {
            menu++;
          }
          else if (sousMenuActivated && compteurMenu <= 8 && compteurMenu > 0) // max 8 devices
          {
            for (short k = 0; k < compteurSousMenu; k++)
            {
              switch (compteurMenu)
              {
                case 1:
                  count = 1;
                  listChannel[0][k] = count + k;
                  break;
                case 2:
                  count = 17;
                  listChannel[0][k] = count + k;
                  break;
                case 3:
                  count = 33;
                  listChannel[0][k] = count + k;
                  break;
                case 4:
                  count = 49;
                  listChannel[0][k] = count + k;
                  break;
                case 5:
                  count = 65;
                  listChannel[0][k] = count + k;
                  break;
                case 6:
                  count = 81;
                  listChannel[0][k] = count + k;
                  break;
                case 7:
                  count = 97;
                  listChannel[0][k] = count + k;
                  break;
                case 8:
                  count = 113;
                  listChannel[0][k] = count + k;
                  break;
              }
            }
            listDevice[compteurMenu - 1]->SetListChannel(compteurSousMenu, listChannel);
            COLOR = WHITE;
            sousMenuActivated = false;
          }
          break;
        case 2:
          if (!sousMenuActivated && compteurMenu != 5)
          {
            sousMenuActivated = true;
            COLOR = RED;
          }
          else if (compteurMenu == 5 && !sousMenuActivated)
          {
            menu++;
            compteurMenu = 1;
            sousMenuActivated = false;
          }
          else if (sousMenuActivated && compteurMenu <= 8) // max 8 devices
          {
            COLOR = WHITE;
            switch (compteurMenu)
            {
              case 1:
                choixDevice = compteurSousMenu - 1;
                break;
              case 2:
                choixChannel = compteurSousMenu - 1;
                break;
              case 3:
                listDevice[choixDevice]->SetEnvAdress(compteurSousMenu, choixChannel);
                break;
              case 4:
                listDevice[choixDevice]->SetcvAttr(compteurSousMenu, choixChannel);
                break;
            }
            sousMenuActivated = false;
          }
          break;

        case 3:
          if (!sousMenuActivated && !bloqueSousMenuSecondaire)
          {
            sousMenuActivated = true;
            COLOR = RED;
          }
          else if (sousMenuActivated && !bloqueSousMenuSecondaire && (compteurMenu == 5 || compteurMenu == 6))
          {
            bloqueSousMenuSecondaire = true;
            COLOR = RED;
          }
          else if (sousMenuActivated && bloqueSousMenuSecondaire && (compteurMenu == 5 || compteurMenu == 6))
          {
            COLOR = WHITE;
            sousMenuActivated = false;
            bloqueSousMenuSecondaire = false;
          }
          else if (sousMenuActivated && compteurMenu < 5)
          {
            COLOR = WHITE;
            sousMenuActivated = false;
          }
          break;

        case 4:

          if (!sousMenuActivated)
          {
            sousMenuActivated = true;
            COLOR = RED;
          }
          else if (sousMenuActivated && compteurMenu <= 16 && compteurMenu >= 0)
          {
            COLOR = WHITE;
            sousMenuActivated = false;
          }

          break;

        case 5:

          switch (compteurMenu)
          {
            case 1:
              compteurMenu = 1;
              menu = 1;
              break;

            case 2:
              compteurMenu = 1;
              menu = 2;
              break;

            case 3:
              compteurMenu = 1;
              menu++;
              break;

            case 4:
              compteurMenu = 1;
              menu = 7;
              break;
          }
          break;

        case 6:
          switch (compteurMenu)
          {
            case 1:
              //menu = 1;
              break;

            case 2:
              //menu = 2;
              break;

            case 3:
              menu = 3;
              break;

          }
          break;

        case 7:
          switch (compteurMenu)
          {
            case 1:
              //menu = 1;
              break;

            case 2:
              //menu = 2;
              break;

            case 3:
              menu = 3;
              break;

            case 4:
              menu = 3;
              break;
          }
          break;
      }
    }
  }
}
