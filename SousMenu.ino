void SousMenu() // affichage des sous menu
{
  delay(50);
  BoutonMenuSuivant();
  index = NbDeviceOpen();  // max devices

  
  switch (menu)
  {
    case 1:

      switch (compteurMenu)
      {
        case 1:

          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > maxSousMenu)
          {
            compteurSousMenu = maxSousMenu;
          }

          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 50 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/50);
            screen.print(compteurSousMenu);
          }
          break;

        case 2:
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > maxSousMenu)
          {
            compteurSousMenu = maxSousMenu;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 75 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/75);
            screen.print(compteurSousMenu);
          }
          break;
        case 3:
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > maxSousMenu)
          {
            compteurSousMenu = maxSousMenu;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 100 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/100);
            screen.print(compteurSousMenu);
          }
          break;
        case 4:
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > maxSousMenu)
          {
            compteurSousMenu = maxSousMenu;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 125 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/125);
            screen.print(compteurSousMenu);
          }
          break;
        case 5:
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > maxSousMenu)
          {
            compteurSousMenu = maxSousMenu;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 150 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/150);
            screen.print(compteurSousMenu);
          }
          break;
        case 6:
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > maxSousMenu)
          {
            compteurSousMenu = maxSousMenu;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 175 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/175);
            screen.print(compteurSousMenu);
          }
          break;
        case 7:
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > maxSousMenu)
          {
            compteurSousMenu = maxSousMenu;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 200 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/200);
            screen.print(compteurSousMenu);
          }
          break;
        case 8:
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > maxSousMenu)
          {
            compteurSousMenu = maxSousMenu;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 225 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/225);
            screen.print(compteurSousMenu);
          }
          break;
      }
      break;

    case 2 :
      switch (compteurMenu)
      {
        case 1 :
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          if (compteurSousMenu > index)
          {
            compteurSousMenu = index;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 165, 50 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/165,/*y=*/50);
            screen.print(compteurSousMenu);
            screen.fillRect( 210, 75 ,  40,  15,  BLACK);
          }
          break;

        case 2 :

          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > listDevice[choixDevice]->GetIndex())
          {
            compteurSousMenu = listDevice[choixDevice]->GetIndex();
          }

          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 210, 75 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/210,/*y=*/75);
            screen.print(compteurSousMenu);
          }
          break;

        case 3 :

          if (compteurSousMenu < 0)
          {
            compteurSousMenu = 0;
          }
          if (compteurSousMenu > 2)
          {
            compteurSousMenu = 2;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 140, 125 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/140,/*y=*/125);
            screen.print(compteurSousMenu);
          }
          break;

        case 4:

          if (compteurSousMenu < 0)
          {
            compteurSousMenu = 0;
          }
          if (compteurSousMenu > 4)
          {
            compteurSousMenu = 4;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 70, 150 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/70,/*y=*/150);
            screen.print(compteurSousMenu);
          }
          break;
      }

      break;

    case 3:
      switch (compteurMenu)
      {
        case 1:

          if (compteurSousMenu < 0)
          {
            compteurSousMenu = 0;
          }
          else if (compteurSousMenu > 19)
          {
            compteurSousMenu = 19;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 120, 50 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/120,/*y=*/50);
            screen.print(listPreset[compteurSousMenu]->GetID());
          }
          break;

        case 2:

          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > 31)
          {
            compteurSousMenu = 31;
          }

          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 120, 50 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/100,/*y=*/70);
            screen.print(listNote[compteurSousMenu]->GetID());
          }

          break;

        case 3:

          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > 2)
          {
            compteurSousMenu = 2;
          }

          if (compteurSousMenu == 1)
          {
            screen.setTextColor(BLACK);
            screen.setCursor(/*x=*/190,/*y=*/120);
            screen.print("2");
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/190,/*y=*/120);
            screen.print("1");
          }
          else if (compteurSousMenu == 2)
          {
            screen.setTextColor(BLACK);
            screen.setCursor(/*x=*/190,/*y=*/120);
            screen.print("1");
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/190,/*y=*/120);
            screen.print("20");
          }

          break;

        case 4:

          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > 2)
          {
            compteurSousMenu = 2;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;

            if (compteurSousMenu == 1)
            {
              screen.setTextColor(BLACK);
              screen.setCursor(/*x=*/100,/*y=*/140);
              screen.print(Mode[1]);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/100,/*y=*/140);
              screen.print(Mode[0]);
            }
            else if (compteurSousMenu == 2)
            {
              screen.setTextColor(BLACK);
              screen.setCursor(/*x=*/100,/*y=*/140);
              screen.print(Mode[0]);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/100,/*y=*/140);
              screen.print(Mode[1]);
            }
          }
          break;

        case 5:

          if (compteurSousMenu < 0)
          {
            compteurSousMenu = 0;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 110, 160 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/110,/*y=*/160);
            screen.print(compteurSousMenu);
          }

          while (bloqueSousMenuSecondaire)
          {
            BoutonMenuSuivant();

            if (compteurSousMenu < 0)
            {
              compteurSousMenu = 0;
            }
            else if (compteurSousMenu > 255)
            {
              compteurSousMenu = 255;
            }
            if (compteurSousMenu != oldValue)
            {
              oldValue = compteurSousMenu;
              screen.fillRect( 185, 160 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/185,/*y=*/160);
              screen.print(compteurSousMenu);
            }
          }
          break;

        case 6:

          if (compteurSousMenu < 0)
          {
            compteurSousMenu = 0;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 110, 180 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/110,/*y=*/180);
            screen.print(compteurSousMenu);
          }

          while (bloqueSousMenuSecondaire)
          {
            BoutonMenuSuivant();

            if (compteurSousMenu < 0)
            {
              compteurSousMenu = 0;
            }
            else if (compteurSousMenu > 255)
            {
              compteurSousMenu = 255;
            }
            if (compteurSousMenu != oldValue)
            {
              oldValue = compteurSousMenu;
              screen.fillRect( 185, 180 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/185,/*y=*/180);
              screen.print(compteurSousMenu);
            }
          }
          break;
      }
      break;

    case 4:
      switch (compteurMenu)
      {
        case 0:
          if (compteurSousMenu < 1)
          {
            compteurSousMenu = 1;
          }
          else if (compteurSousMenu > index)
          {
            compteurSousMenu = index;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            screen.fillRect( 160, 25 ,  40,  15,  BLACK);
            screen.setTextColor(COLOR);
            screen.setCursor(/*x=*/160,/*y=*/25);
            screen.print(listDevice[compteurSousMenu]->GetID());
          }
          break;
        case 1:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }

          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect( 85, 50 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/50);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect( 85, 50 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/50);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 2:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect( 200, 50 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/200,/*y=*/50);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect( 200, 50 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/200,/*y=*/50);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 3:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect(85, 70 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/70);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect(85, 70 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/70);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 4:
          break;
        case 5:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect(85, 90 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/90);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect(85, 90 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/90);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 6:
          break;
        case 7:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect(85, 110 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/110);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect(85, 110 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/110);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 8:
          break;
        case 9:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect(85, 130 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/130);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect(85, 130 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/130);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 10:
          break;
        case 11:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect(85, 150 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/150);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect(85, 150 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/150);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 12:
          break;
        case 13:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect(85, 170 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/170);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect(85, 170 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/170);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 14:
          break;
        case 15:
          if (compteurSousMenu < -4)
          {
            compteurSousMenu = -4;
          }
          else if (compteurSousMenu > 255)
          {
            compteurSousMenu = 255;
          }
          if (compteurSousMenu != oldValue)
          {
            oldValue = compteurSousMenu;
            if (compteurSousMenu < 0)
            {
              valeurCalcul = compteurSousMenu;
              valeurCalcul = -valeurCalcul - 1;
              screen.fillRect(85, 190 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/190);
              screen.print(CV[valeurCalcul]);
            }
            else if (compteurSousMenu >= 0 && compteurSousMenu <= 255)
            {
              screen.fillRect(85, 190 ,  40,  15,  BLACK);
              screen.setTextColor(COLOR);
              screen.setCursor(/*x=*/85,/*y=*/190);
              screen.print(compteurSousMenu);
            }
          }
          break;
        case 16:
          break;
      }
      break;
  }
}

short NbDeviceOpen() // check listChannel de chaque device pour trouver le nombre de device utilisé
{
  for (short i = 0; i <= 7; i++)
  {
    if (listDevice[i]->GetChannel(0) == NULL)
    {
      return i;
    }
  }
}
