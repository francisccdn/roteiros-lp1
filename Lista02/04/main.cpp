#include <iostream>
#include "TestaValidaNumero.h"

using namespace std;

int main (void)
{
    TestaValidaNumero *test = new TestaValidaNumero();
    int n = -5;

    for(int i = 10; i < 5000; i *= 2)
    {
        try{
            test->validaNumero(n);
            cout << "n = " << n << endl;
        }catch(ValorAbaixoException &e1){
            cerr << "exception: " << e1.what() << endl;
        }catch(ValorAcimaException &e2){
            cerr << "exception: " << e2.what() << endl;
        }catch(ValorMuitoAcimaException &e3){
            cerr << "exception: " << e3.what() << endl;
        }

        n += i;
    }

    return 0;
}