#include "Comissionado.h"

Comissionado::Comissionado(std::string nome, int matricula, double salario, double percentualComissao, double vendasSemanais)
    : Funcionario(nome, matricula)
{
    setSalario(salario);
    setPercentualComissao(percentualComissao);
    setVendasSemanais(vendasSemanais);
}

double Comissionado::calcularSalario()
{
    double salario = salarioBase;
    salario += (percentualComissao/100) * vendasSemanais;
    return salario;
}