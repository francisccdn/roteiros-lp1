#pragma once

#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include <vector>

class SistemaGerenciaFolha
{
private:
    double orcamentoMaximo;
    std::vector<Funcionario*> funcionarios;

    Funcionario* procurarFuncionario(std::string);

public:
    SistemaGerenciaFolha(double);

    void setFuncionario(Funcionario *func) { funcionarios.push_back(func); }
    double calculaTotalFolha();
    double consultaSalarioFuncionario(std::string);
};