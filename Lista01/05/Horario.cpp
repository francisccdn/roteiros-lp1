#include "Horario.h"

Horario::Horario(){
  hora = 0;
  min = 0;
  seg = 0;
}

Horario::Horario(int h, int m, int s){
  setHorario(h, m, s);
}

int Horario::getHora(){
  return hora;
}
int Horario::getMin(){
  return min;
}
int Horario::getSeg(){
  return seg;
}

void Horario::setHorario(int h, int m, int s){
  hora = (h > 24 | h < 0) ? 0 : h;
  min = (m > 59 | m < 0) ? 0 : m;
  seg = (s > 59 | s < 0) ? 0 : s;
}

std::string Horario::toString(){
  std::string str = std::to_string(getHora()) + ":" + std::to_string(getMin())+ ":" + std::to_string(getSeg());
  return str;
}

void Horario::avancaHorario(){
  if(seg < 59){
    seg++;
  }else if(min < 59){
    seg = 0;
    min++;
  }else if(hora < 23){
    seg = 0;
    min = 0;
    hora++;
  }else{
    seg = 0;
    min = 0;
    hora = 0;
  }
}
