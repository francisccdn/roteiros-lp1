#pragma once

#include "Funcionario.h"

class Assalariado : public Funcionario
{
public:
    Assalariado(std::string nome, int matricula, double salario);

    void setSalario(double s) { salarioBase = s; }
    double calcularSalario() { return salarioBase; }
};