void PointDeSelection(uint16_t text, uint16_t background) //affichage du point de sélection
{
  switch (menu)
  {
    case 1:

      if (compteurMenu == 0)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 105, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(10, 181, 5, background);
        screen.fillCircle(10, 205, 5, background);
        screen.fillCircle(10, 231, 5, background);
        screen.fillCircle(200, 231, 5, text);
      }

      else if (compteurMenu == 1)
      {
        screen.fillCircle(10, 56, 5, text);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 105, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(10, 181, 5, background);
        screen.fillCircle(10, 205, 5, background);
        screen.fillCircle(10, 231, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 2)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, text);
        screen.fillCircle(10, 105, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(10, 181, 5, background);
        screen.fillCircle(10, 205, 5, background);
        screen.fillCircle(10, 231, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 3)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 105, 5, text);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(10, 181, 5, background);
        screen.fillCircle(10, 205, 5, background);
        screen.fillCircle(10, 231, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 4)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 105, 5, background);
        screen.fillCircle(10, 131, 5, text);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(10, 181, 5, background);
        screen.fillCircle(10, 205, 5, background);
        screen.fillCircle(10, 231, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 5)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 105, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, text);
        screen.fillCircle(10, 181, 5, background);
        screen.fillCircle(10, 205, 5, background);
        screen.fillCircle(10, 231, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 6)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 105, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(10, 181, 5, text);
        screen.fillCircle(10, 205, 5, background);
        screen.fillCircle(10, 231, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 7)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 105, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(10, 181, 5, background);
        screen.fillCircle(10, 205, 5, text);
        screen.fillCircle(10, 231, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 8)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 105, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(10, 181, 5, background);
        screen.fillCircle(10, 205, 5, background);
        screen.fillCircle(10, 231, 5, text);
        screen.fillCircle(200, 231, 5, background);
      }
      break;

    case 2:

      if (compteurMenu == 1)
      {
        screen.fillCircle(10, 56, 5, text);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }

      else if (compteurMenu == 2)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, text);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 3)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 131, 5, text);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 4)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, text);
        screen.fillCircle(200, 231, 5, background);
      }
      else if (compteurMenu == 5)
      {
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 81, 5, background);
        screen.fillCircle(10, 131, 5, background);
        screen.fillCircle(10, 161, 5, background);
        screen.fillCircle(200, 231, 5, text);
      }
      break;

    case 3:
      if (compteurMenu == 1)
      {
        screen.fillCircle(10, 56, 5, text);
        screen.fillCircle(10, 76, 5, background);
        screen.fillCircle(10, 125, 5, background);
        screen.fillCircle(10, 145, 5, background);
        screen.fillCircle(10, 165, 5, background);
        screen.fillCircle(10, 185, 5, background);
      }
      else if (compteurMenu == 2)
      {
        screen.fillCircle(10, 76, 5, text);
        screen.fillCircle(10, 125, 5, background);
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 145, 5, background);
        screen.fillCircle(10, 165, 5, background);
        screen.fillCircle(10, 185, 5, background);
      }
      else if (compteurMenu == 3)
      {
        screen.fillCircle(10, 125, 5, text);
        screen.fillCircle(10, 76, 5, background);
        screen.fillCircle(10, 145, 5, background);
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 165, 5, background);
        screen.fillCircle(10, 185, 5, background);
      }
      else if (compteurMenu == 4)
      {
        screen.fillCircle(10, 145, 5, text);
        screen.fillCircle(10, 76, 5, background);
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 125, 5, background);
        screen.fillCircle(10, 165, 5, background);
        screen.fillCircle(10, 185, 5, background);
      }
      else if (compteurMenu == 5)
      {
        screen.fillCircle(10, 165, 5, text);
        screen.fillCircle(10, 185, 5, background);
        screen.fillCircle(10, 145, 5, background);
        screen.fillCircle(10, 76, 5, background);
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 125, 5, background);

      }
      else
      {
        screen.fillCircle(10, 185, 5, text);
        screen.fillCircle(10, 165, 5, background);
        screen.fillCircle(10, 76, 5, background);
        screen.fillCircle(10, 56, 5, background);
        screen.fillCircle(10, 125, 5, background);
        screen.fillCircle(10, 145, 5, background);
      }
      break;

    case 4:
      switch (compteurMenu)
      {
        case 0:
          screen.fillCircle(15, 30, 5, text);
          screen.fillCircle(15, 56, 5, background);
          break;
        case 1:
          screen.fillCircle(15, 56, 5, text);          
          screen.fillCircle(15, 30, 5, background);
          screen.fillCircle(135, 56, 5, background);
          break;
        case 2:
          screen.fillCircle(135, 56, 5, text);
          screen.fillCircle(15, 76, 5, background);
          screen.fillCircle(15, 56, 5, background);
          break;
        case 3:
          screen.fillCircle(15, 76, 5, text);
          screen.fillCircle(135, 56, 5, background);
          screen.fillCircle(135, 76, 5, background);
          break;
        case 4:
          screen.fillCircle(135, 76, 5, text);
          screen.fillCircle(15, 76, 5, background);
          screen.fillCircle(15, 96, 5, background);
          break;
        case 5:
          screen.fillCircle(15, 96, 5, text);
          screen.fillCircle(135, 76, 5, background);
          screen.fillCircle(135, 96, 5, background);
          break;
        case 6:
          screen.fillCircle(135, 96, 5, text);
          screen.fillCircle(15, 96, 5, background);
          screen.fillCircle(15, 116, 5, background);
          break;
        case 7:
          screen.fillCircle(15, 116, 5, text);
          screen.fillCircle(135, 96, 5, background);
          screen.fillCircle(135, 116, 5, background);
          break;
        case 8:
          screen.fillCircle(135, 116, 5, text);
          screen.fillCircle(15, 116, 5, background);
          screen.fillCircle(15, 136, 5, background);
          break;
        case 9:
          screen.fillCircle(15, 136, 5, text);
          screen.fillCircle(135, 116, 5, background);
          screen.fillCircle(135, 136, 5, background);
          break;
        case 10:
          screen.fillCircle(135, 136, 5, text);
          screen.fillCircle(15, 136, 5, background);
          screen.fillCircle(15, 156, 5, background);
          break;
        case 11:
          screen.fillCircle(15, 156, 5, text);
          screen.fillCircle(135, 136, 5, background);
          screen.fillCircle(135, 156, 5, background);
          break;
        case 12:
          screen.fillCircle(135, 156, 5, text);
          screen.fillCircle(15, 156, 5, background);
          screen.fillCircle(15, 176, 5, background);
          break;
        case 13:
          screen.fillCircle(15, 176, 5, text);
          screen.fillCircle(135, 156, 5, background);
          screen.fillCircle(135, 176, 5, background);
          break;
        case 14:
          screen.fillCircle(135, 176, 5, text);
          screen.fillCircle(15, 176, 5, background);
          screen.fillCircle(15, 196, 5, background);
          break;
        case 15:
          screen.fillCircle(15, 196, 5, text);
          screen.fillCircle(135, 176, 5, background);
          screen.fillCircle(135, 196, 5, background);
          break;
        case 16:
          screen.fillCircle(135, 196, 5, text);
          screen.fillCircle(15, 196, 5, background);
          break;
      }
      break;

    case 5:
      switch (compteurMenu)
      {
        case 1:
          screen.fillCircle(15, 36, 5, text);
          screen.fillCircle(15, 56, 5, background);
          break;
        case 2:
          screen.fillCircle(15, 56, 5, text);
          screen.fillCircle(15, 36, 5, background);
          screen.fillCircle(15, 96, 5, background);
          break;
        case 3:
          screen.fillCircle(15, 96, 5, text);
          screen.fillCircle(15, 56, 5, background);
          screen.fillCircle(15, 136, 5, background);
          break;
        case 4:
          screen.fillCircle(15, 136, 5, text);
          screen.fillCircle(15, 96, 5, background);
          break;
      }
      break;

    case 6:
      switch (compteurMenu)
      {
        case 1:
          screen.fillCircle(10, 78, 5, text);
          screen.fillCircle(10, 106, 5, background);
          break;
        case 2:
          screen.fillCircle(10, 106, 5, text);
          screen.fillCircle(10, 78, 5, background);
          screen.fillCircle(200, 231, 5, background);
          break;
        case 3:
          screen.fillCircle(200, 231, 5, text);
          screen.fillCircle(10, 106, 5, background);
          break;
      }
      break;

    case 7:
      switch (compteurMenu)
      {
        case 1:
          screen.fillCircle(35, 110, 5, text);
          screen.fillCircle(35, 180, 5, background);
          break;
        case 2:
          screen.fillCircle(35, 110, 5, background);
          screen.fillCircle(35, 180, 5, text);
          screen.fillCircle(20, 225, 5, background);
          break;
        case 3:
          screen.fillCircle(35, 180, 5, background);
          screen.fillCircle(20, 225, 5, text);
          screen.fillCircle(165, 225, 5, background);
          break;
        case 4:
          screen.fillCircle(165, 225, 5, text);
          screen.fillCircle(20, 225, 5, background);
          break;
      }
      break;
  }
}
