#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main(){
    ControleDePagamentos controle;

    controle.setPagamentos(Pagamento(54, "Jose"));
    controle.setPagamentos(Pagamento(55452, "Derzu"));
    controle.setPagamentos(Pagamento(4542, "Ana"));

    cout << "Total de pagamentos: " << controle.calculaTotalDePagamentos() << endl;
    cout << "Existe pagamento para 'Ana'? ";
    if(controle.existePagamentoParaFuncionario("Ana")){
        cout << "Sim" << endl;
    }else{
        cout << "Não" << endl;
    }

    return 0;
}