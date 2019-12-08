#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

class Pagamento
{
private:
    double valorPagamento;
    std::string nomeDoFuncionario;

public:
    Pagamento(double v, std::string n);
    void setValor(double v);
    void setNome(std::string n);
    double getValor();
    std::string getNome();
};

#endif //PAGAMENTO_H