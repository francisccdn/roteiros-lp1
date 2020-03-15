#pragma once

#include "ValoresException.h"

class TestaValidaNumero
{
public:
    void validaNumero(int num)
    {
        if(num < 0)
        {
            throw ValorAbaixoException();
        }
        else if(num > 100 && num < 1000)
        {
            throw ValorAcimaException();
        }
        else if(num > 1000)
        {
            throw ValorMuitoAcimaException();
        }
    }
};