#ifndef HORARIO_H
#define HORARIO_H

#include <string>

class Horario
{
  public:
    Horario();
    Horario(int h, int m, int s);

    int getHora();
    int getMin();
    int getSeg();
    void setHorario(int h, int m, int s);

    void avancaHorario();
    std::string toString();

  private:
    int hora, min, seg;
};


#endif //HORARIO_H
