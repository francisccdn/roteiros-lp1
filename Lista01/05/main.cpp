#include <iostream>
#include "Horario.h"

using namespace std;

int main() {
    Horario agora = Horario(23, 41, 32);
    Horario indef;

    cout << agora.toString() << endl;
    cout << indef.toString() << endl;

    agora.avancaHorario();
    cout << agora.toString() << endl;

    agora.setHorario(22, 59, 59);
    cout << agora.toString() << endl;
    
    agora.avancaHorario();
    cout << agora.toString() << endl;

    return 0;
}
