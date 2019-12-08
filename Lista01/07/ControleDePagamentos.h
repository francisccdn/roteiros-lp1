#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"
#include <vector>

class ControleDePagamentos
{
private:
    std::vector<Pagamento> pagamentos;

public:
    void setPagamentos(Pagamento);

    double calculaTotalDePagamentos();
    bool existePagamentoParaFuncionario(std::string);
};

#endif //CONTROLEDEPAGAMENTOS_H