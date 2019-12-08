#include "Invoice.h"

Invoice::Invoice(){
  numero = 0;
  descricao = "Empty";
  qtd = 0;
  preco = 0;
}

Invoice::Invoice(int n, std::string d, int q, double p){
  setNum(n);
  setDesc(d);
  setQtd(q);
  setPreco(p);
}

void Invoice::setNum(int n){
  numero = n;
}

void Invoice::setDesc(std::string d){
  descricao = d;
}

void Invoice::setQtd(int q){
  qtd = (q < 0) ? 0 : q;
}

void Invoice::setPreco(double p){
  preco = (p < 0) ? 0 : p;
}

int Invoice::getNum(){
  return numero;
}

std::string Invoice::getDesc(){
  return descricao;
}

int Invoice::getQtd(){
  return qtd;
}

double Invoice::getPreco(){
  return preco;
}

double Invoice::getInvoiceAmount(){
  return (qtd*preco);
}
