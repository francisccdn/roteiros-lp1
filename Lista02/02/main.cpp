#include <iostream>
#include <vector>
#include "ContaEspecial.h"
#include "Conta.h"

using namespace std;

int main(void){
    vector<Conta> banco;
    banco.push_back(Conta("Jose", 1000, 1, 200));
    banco.push_back(ContaEspecial("Arthur", 2000, 2, 999));

    for(auto k : banco){
        k.exibirDados();
    }

    try{
        banco[0].sacar(300);
    }catch(SaldoNaoDisponivelException &e){
        cerr << "Exception: " << banco[0].getNomeCliente() << " - " << e.what() << endl << endl;
    }

    try{
        banco[1].sacar(300);
    }catch(SaldoNaoDisponivelException &e){
        cerr << "Exception: " << banco[1].getNomeCliente() << " - " << e.what() << endl << endl;
    }
    
    for(auto k : banco){
        k.exibirDados();
    }

    return 0;
}
