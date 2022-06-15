void MinMaxSelect()
{
  //definition des sélections min et max dans chaque menu
  switch (menu)
  {
    case 1:
      if (listDevice[0]->GetChannel(0) == NULL)
      {
        if (compteurMenu < 1)
        {
          compteurMenu = 1;
        }
        else if (compteurMenu > 1)
        {
          compteurMenu = 1;
        }
      }
      else if (listDevice[1]->GetChannel(0) == NULL)
      {
        if (compteurMenu < 0)
        {
          compteurMenu = 0;
        }
        else if (compteurMenu > 2)
        {
          compteurMenu = 2;
        }
      }
      else if (listDevice[2]->GetChannel(0) == NULL)
      {
        if (compteurMenu < 0)
        {
          compteurMenu = 0;
        }
        else if (compteurMenu > 3)
        {
          compteurMenu = 3;
        }
      }
      else if (listDevice[3]->GetChannel(0) == NULL)
      {
        if (compteurMenu < 0)
        {
          compteurMenu = 0;
        }
        else if (compteurMenu > 4)
        {
          compteurMenu = 4;
        }
      }
      else if (listDevice[4]->GetChannel(0) == NULL)
      {
        if (compteurMenu < 0)
        {
          compteurMenu = 0;
        }
        else if (compteurMenu > 5)
        {
          compteurMenu = 5;
        }
      }
      else if (listDevice[5]->GetChannel(0) == NULL)
      {
        if (compteurMenu < 0)
        {
          compteurMenu = 0;
        }
        else if (compteurMenu > 6)
        {
          compteurMenu = 6;
        }
      }
      else if (listDevice[6]->GetChannel(0) == NULL)
      {
        if (compteurMenu < 0)
        {
          compteurMenu = 0;
        }
        else if (compteurMenu > 7)
        {
          compteurMenu = 7;
        }
      }
      else if (compteurMenu > 8)
      {
        compteurMenu = 8;
      }
      break;

    case 2 :
      if (compteurMenu < 1) {
        compteurMenu = 1;
      }
      else if (compteurMenu > 5) {
        compteurMenu = 5;
      }

      break;

    case 3 :
      if (compteurMenu < 1) {
        compteurMenu = 1;
      }
      if (compteurMenu > 6)
      {
        compteurMenu = 0;
        menu++;
      }
      break;
      
    case 4 :
      {
        if (compteurMenu < -1) {
          compteurMenu = -1;
        }
        else if (compteurMenu > 16) {
          compteurMenu =  1;
          menu++;
        }
        if (compteurMenu == -1)
        {
          compteurMenu = 6;
          menu--;
        }
      }
      break;
      
    case 5:
      if (compteurMenu < 0) {
        compteurMenu = 0;
      }
      else if (compteurMenu > 4) {
        compteurMenu = 4;
      }
      if (compteurMenu == 0)
      {
        compteurMenu = 16;
        menu--;
      }
      break;
      
    case 6:
      if (compteurMenu < 0) {
        compteurMenu = 0;
      }
      else if (compteurMenu > 3) {
        compteurMenu = 3;
      }
      break;
      
    case 7:
      if (compteurMenu < 0) {
        compteurMenu = 0;
      }
      else if (compteurMenu > 4) {
        compteurMenu = 4;
      }
      break;
  }
}
