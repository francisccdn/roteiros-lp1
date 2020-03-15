#include "Horista.h"

Horista::Horista(std::string nome, int matricula, double salarioPorHora, int horasTrabalhadas)
    : Funcionario(nome, matricula)
{
    setSalarioPorHora(salarioPorHora);
    setHorasTrabalhadas(horasTrabalhadas);
}


double Horista::calcularSalario()
{
    int extra = horasTrabalhadas - 40;
    extra = (extra < 0) ? 0 : extra;
    int horas = horasTrabalhadas - extra;

    return (salarioBase * horas) + (salarioBase * 1.5 * extra);
}