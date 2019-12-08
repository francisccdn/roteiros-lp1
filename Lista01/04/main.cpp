#include <iostream>
#include "Data.h"

using namespace std;

int main() {
    Data hoje;
    Data amanha = Data(8, 12, 2019);

    hoje.setData(7,12,2019);
    cout << "hoje: " << hoje.getDia() << '/' << hoje.getMes() << '/' << hoje.getAno() << endl;

    if(hoje.compara(amanha) < 0){
        cout << "Parametro vem depois de data corrente" << endl;
    }else if(hoje.compara(amanha) > 0){
        cout << "Parametro vem antes de data corrente" << endl;
    }else if(!hoje.compara(amanha)){
        cout << "Datas sao iguais" << endl;
    }

    cout << "amanha: " << amanha.getDia() << " de " << amanha.getMesExtenso() << " de " << amanha.getAno() << endl;

    if(hoje.isBissexto()){
        cout << hoje.getAno() << " é bissexto" << endl;
    }else if(!hoje.isBissexto()){
        cout << hoje.getAno() << " não é bissexto" << endl;
    }

    return 0;
}
