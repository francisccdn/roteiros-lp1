#include <iostream>
#include "SistemaGerenciaFolha.h"

using namespace std;

int main()
{
    SistemaGerenciaFolha sistema(950000);

    sistema.setFuncionario(new Assalariado("Jose", 1, 1000));
    sistema.setFuncionario(new Horista("Maria", 2, 30, 52));
    sistema.setFuncionario(new Comissionado("Derzu", 3, 3000, 40, 30000));

    cout << "Consultando salario de Tiago" << endl;
    cout << "Salario = " << sistema.consultaSalarioFuncionario("Tiago") << endl;

    cout << "Consultando salario de Derzu" << endl;
    cout << "Salario = " << sistema.consultaSalarioFuncionario("Derzu") << endl;

    cout << "Total da folha de pagamentos = " << sistema.calculaTotalFolha() << endl;

    sistema.setFuncionario(new Horista("Arthur Ruan", 4, 5000, 168));

    cout << "Total da folha de pagamentos = " << sistema.calculaTotalFolha() << endl;

    return 0;
}