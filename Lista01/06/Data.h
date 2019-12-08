#ifndef DATA_H
#define DATA_H

#include <string>

class Data
{
  public:
    Data();
    Data(int d, int m, int a);

    int getDia();
    int getMes();
    int getAno();
    void setData(int d, int m, int a);

    std::string getMesExtenso();
    int compara(Data comp);
    bool isBissexto();

  private:
    int dia, mes, ano;
};


#endif //DATA_H
