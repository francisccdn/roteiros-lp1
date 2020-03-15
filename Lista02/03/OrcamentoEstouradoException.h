#pragma once

#include <exception>

class OrcamentoEstouradoException : public std::exception
{
public:
    const char * what() const throw ()
    {
        return "Folha de pagamento extrapola limite do orçamento.";
    }
};