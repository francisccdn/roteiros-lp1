#include "Data.h"

Data::Data()
{
  dia = 1;
  mes = 1;
  ano = 1;
}

Data::Data(int d, int m, int a)
{
  setData(d, m, a);
}

int Data::getDia() { return dia; }
int Data::getMes() { return mes; }
int Data::getAno() { return ano; }

void Data::setData(int d, int m, int a)
{
  dia = (d > 31 | d < 1) ? 1 : d;
  mes = (m > 12 | m < 1) ? 1 : m;
  ano = (a < 0) ? 0 : a;
}

bool Data::isBissexto()
{
  if(ano % 400 == 0){
    return true;
  }else if(ano % 4 == 0 && ano % 100 != 0){
    return true;
  }else{
    return false;
  }
}

int Data::compara(Data comp)
{
  if (comp.getDia() == dia && comp.getMes() == mes && comp.getAno() == ano)
  {
    return 0;
  }

  if (comp.getAno() < ano)
  {
    return 1;
  }
  else if (comp.getAno() == ano)
  {
    if (comp.getMes() < mes)
    {
      return 1;
    }
    else if (comp.getMes() == mes)
    {
      if (comp.getDia() < dia)
      {
        return 1;
      }
      else
      {
        return -1;
      }
    }
  }
}

std::string Data::getMesExtenso()
{
  switch (mes)
  {
    case 1:
      return "Janeiro";
      break;
    case 2:
      return "Fevereiro";
      break;
    case 3:
      return "Março";
      break;
    case 4:
      return "Abril";
      break;
    case 5:
      return "Maio";
      break;
    case 6:
      return "Junho";
      break;
    case 7:
      return "Julho";
      break;
    case 8:
      return "Agosto";
      break;
    case 9:
      return "Setembro";
      break;
    case 10:
      return "Outubro";
      break;
    case 11:
      return "Novembro";
      break;
    case 12:
      return "Dezembro";
      break;
  }
}
