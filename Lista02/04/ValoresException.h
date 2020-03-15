#pragma once
#include <exception>

class ValorAbaixoException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Valor abaixo do esperado.";
    }
};

class ValorAcimaException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Valor acima do esperado.";
    }
};

class ValorMuitoAcimaException : public std::exception
{
public:
    const char *what() const throw()
    {
        return "Valor muito acima do esperado.";
    }
};