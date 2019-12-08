#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice
{
public:
  Invoice();
  Invoice(int, std::string, int, double);

  void setNum(int);
  void setDesc(std::string);
  void setQtd(int);
  void setPreco(double);

  int getNum();
  std::string getDesc();
  int getQtd();
  double getPreco();
  double getInvoiceAmount();

private:
  int numero;
  std::string descricao;
  int qtd;
  double preco;

};

#endif
