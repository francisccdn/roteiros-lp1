#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
  Invoice vazio = Invoice();
  Invoice doisPcs = Invoice(1, "Computador", 2, 1550.75);
  Invoice fone = Invoice();

  fone.setNum(2);
  fone.setQtd(6);
  fone.setDesc("Fone de ouvido com cancelamento de ruído");
  fone.setPreco(624.89);

  cout << "Teste objeto vazio: " << vazio.getDesc() << " " << vazio.getPreco() << endl << endl;

  cout << "Código do item: " << doisPcs.getNum() << endl;
  cout << "Descricao: " << doisPcs.getDesc() << endl;
  cout << "Quantidade: " << doisPcs.getQtd() << endl << "Preco: R$" << doisPcs.getPreco() << endl;
  cout << "TOTAL: R$" << doisPcs.getInvoiceAmount() << endl << endl;

  cout << "Código do item: " << fone.getNum() << endl;
  cout << "Descricao: " << fone.getDesc() << endl;
  cout << "Quantidade: " << fone.getQtd() << endl << "Preco: R$" << fone.getPreco() << endl;
  cout << "TOTAL: R$" << fone.getInvoiceAmount() << endl;

  return 0;
}
