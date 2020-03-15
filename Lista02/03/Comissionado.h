#pragma once

#include "Funcionario.h"

class Comissionado : public Funcionario
{
private:
    double vendasSemanais;
    double percentualComissao;

public:
    Comissionado(std::string nome, int matricula, double salario, double percentualComissao, double vendasSemanais);

    void setSalario(double s) { salarioBase = s; }
    void setPercentualComissao(double p) { percentualComissao = p; }
    double getPercentualComissao() { return percentualComissao; }
    void setVendasSemanais(double v) { vendasSemanais = v; }
    double getVendasSemanais() { return vendasSemanais; }

    double calcularSalario();
};