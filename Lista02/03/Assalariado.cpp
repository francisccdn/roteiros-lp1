#include "Assalariado.h"

Assalariado::Assalariado(std::string nome, int matricula, double salario)
    : Funcionario(nome, matricula)
{
    setSalario(salario);
}