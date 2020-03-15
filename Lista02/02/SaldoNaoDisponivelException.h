#pragma once

#include <exception>

class SaldoNaoDisponivelException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Saldo nao disponivel.";
    }
};