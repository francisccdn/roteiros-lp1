#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include <iostream>

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMax)
{
    orcamentoMaximo = orcamentoMax;
}

double SistemaGerenciaFolha::calculaTotalFolha()
{
    double total = 0;
    for(Funcionario *f : funcionarios)
    {
        total += f->calcularSalario();
    }

    try
    {
        if(total > orcamentoMaximo)
        {
            throw OrcamentoEstouradoException();
        }
        return total;
    }
    catch(OrcamentoEstouradoException e)
    {
        std::cerr << e.what() << '\n';
    }
}

Funcionario* SistemaGerenciaFolha::procurarFuncionario(std::string nome)
{
    for(Funcionario* f : funcionarios)
    {
        if(f->getNome() == nome)
            return f;
    }

    throw FuncionarioNaoExisteException();
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string nome)
{
    double salario;
    try
    {
        salario = procurarFuncionario(nome)->calcularSalario();
        return salario;
    }
    catch(FuncionarioNaoExisteException e)
    {
        std::cerr << e.what() << '\n';
    }
}