#pragma once

#include "Horario.h"
#include "Data.h"

class Voo
{
private:
    int num;
    Data data;
    Horario horario;
    bool cadeiras[100] = { false }; //false = livre | true = ocupada

public:
    Voo(int, Data, Horario);
    int proximoLivre();
    bool verifica(int);
    bool ocupa(int);
    int vagas();

    int getNumVoo();
    Data getData();
    Horario getHorario();
};