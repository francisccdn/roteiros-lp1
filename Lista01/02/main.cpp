#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){
  Pessoa pessoa1 = Pessoa("Tiago Maritan");
  Pessoa pessoa2 = Pessoa("Chico", "1111", 18);

  pessoa2.setTel("99934-5032");
  pessoa1.setNome("Tiago Maritan");
  pessoa2.setIdade(19);

  cout << "Nome: " << pessoa1.getNome() << endl;
  cout << "Idade: ";
  if(pessoa1.getIdade()){
    cout << pessoa1.getIdade() << endl;
  }else{
    cout << "Não informada" << endl;
  }
  cout << "Telefone: " << pessoa1.getTel() << endl << endl;

  cout << "Nome: " << pessoa2.getNome() << endl;
  cout << "Idade: ";
  if(pessoa2.getIdade()){
    cout << pessoa2.getIdade() << endl;
  }else{
    cout << "Não informada" << endl;
  }
  cout << "Telefone: " << pessoa2.getTel() << endl << endl;

  return 0;
}
