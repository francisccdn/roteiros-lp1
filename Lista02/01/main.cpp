#include <iostream>
#include <vector>
#include "ContaEspecial.h"
#include "Conta.h"

using namespace std;

int main(void){
    vector<Conta> banco;
    banco.push_back(Conta("Jose", 1000, 1, 0));
    banco.push_back(ContaEspecial("Arthur", 2000, 2, 999));

    for(auto k : banco){
        k.exibirDados();
    }

    banco[0].sacar(258.34);
    banco[1].depositar(321.40);
    
    for(auto k : banco){
        k.exibirDados();
    }
    
    banco[0].setSalarioMensal(1200);
    banco[1].setSalarioMensal(2500);

    for(auto k : banco){
        k.definirLimite();
        k.exibirDados();
    }

    return 0;
}
