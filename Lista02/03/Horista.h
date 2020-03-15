#pragma once

#include "Funcionario.h"

class Horista : public Funcionario
{
private:
    double horasTrabalhadas;

public:
    Horista(std::string nome, int matricula, double salarioPorHora, int horasTrabalhadas);

    void setSalarioPorHora(double s) { salarioBase = s; }
    void setHorasTrabalhadas(int h) { horasTrabalhadas = h; }
    int getHorasTrabalhadas() { return horasTrabalhadas; }

    double calcularSalario();
};