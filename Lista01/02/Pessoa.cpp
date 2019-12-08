#include "Pessoa.h"

Pessoa::Pessoa(std::string n){
  nome = n;
  idade = 0;
  telefone = "Não informado";
}

Pessoa::Pessoa(std::string n, std::string t, int i){
  nome = n;
  telefone = t;
  idade = i;
}

void Pessoa::setIdade(int i){idade = i;}
void Pessoa::setNome(std::string n){nome = n;}
void Pessoa::setTel(std::string t){telefone = t;}

int Pessoa::getIdade(){return idade;}
std::string Pessoa::getNome(){return nome;}
std::string Pessoa::getTel(){return telefone;}
