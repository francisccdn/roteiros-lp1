#include "ControleDePagamentos.h"

void ControleDePagamentos::setPagamentos(Pagamento p){
    pagamentos.push_back(p);
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double total = 0;
    for(int i = 0; i < pagamentos.size(); i++){
        total += pagamentos[i].getValor();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nomeFuncionario){
    for(int i = 0; i < pagamentos.size(); i++){
        if(pagamentos[i].getNome() == nomeFuncionario){
            return true;
        }
    }
    return false;
}