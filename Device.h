class Note
{
  private:
    short id;
    short gate;
    bool mode;
    short env1A;
    short env1R;
    short env2A;
    short env2R;

  public:
    Note(short id)   // constructeur
    {
      this->id = id;
    }
    short GetID()
    {
      return id;
    }
};

class Preset
{
  private:
    short id;
    Note *listNote[32];

  public:
    Preset(short id, Note *listNote[])   // constructeur
    {
      this->id = id;

      for (int i = 0; i < 32; ++i)
      {        
        this->listNote[i] = listNote[i];
      }
    }

    short GetID()
    {
      return id;
    }
    short GetListNote(short i)
    {
      return listNote[i]->GetID();
    }
};

class Device
{
  private:
    short id;
    short index;
    short listChannel[3][16];

  public:
    Device(short id)  // constructeur
    {
      this->id = id;
    }

    short GetChannel(short channel)
    {
      return listChannel[0][channel];
    }
    short GetEnvelop(short channel)
    {
        return listChannel[1][channel];
    }
    short GetCv(short channel)
    {
        return listChannel[2][channel];
    }
    short GetID()
    {
      return id;
    }
    short GetIndex()
    {
      return index;
    }

    void SetListChannelDefault(short listChannel[][16])
    {
      for (short i = 0; i <= 15; i++)
      {
        this->listChannel[0][i] = listChannel[0][i];
      }
      for (short i = 0; i <= 15; i++)
      {
          this->listChannel[1][i] = listChannel[1][i];
      }
      for (short i = 0; i <= 15; i++)
      {
          this->listChannel[2][i] = listChannel[2][i];
      }
    }

    void SetListChannel(short index, short listChannel[][16])
    {
      this->index = index;

      for (short i = 0; i <= this->index; i++)
      {
        this->listChannel[0][i] = listChannel[0][i];
      }
    }

    void SetEnvAdress(short envAddr, short channel)
    {
      listChannel[1][channel] = envAddr;''
    }
    void SetcvAttr(short cvAttr, short channel)
    {
        listChannel[2][channel] = cvAttr;
    }
};
