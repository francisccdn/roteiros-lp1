#include "Pagamento.h"

Pagamento::Pagamento(double v, std::string n){
    valorPagamento = v;
    nomeDoFuncionario = n;
}

void Pagamento::setNome(std::string n){nomeDoFuncionario = n;}
void Pagamento::setValor(double v){valorPagamento = v;}
std::string Pagamento::getNome(){return nomeDoFuncionario;}
double Pagamento::getValor(){return valorPagamento;}
