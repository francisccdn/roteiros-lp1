#include <iostream>
#include <string>
#include <vector>
#include "Voo.h"
#include "Horario.h"
#include "Data.h"

using namespace std;

int main(){
    vector<Voo> meusVoos;
    int op;
    int num, dia, mes, ano, hora, min, seg;
    int cadeira;
    int indexVoo;
    bool flag = true;

    Voo teste(000, Data(), Horario());

    cout << teste.vagas() << endl;

    while(flag){
        std::cout << "1 - Registrar voo" << endl
                  << "2 - Numero de assento disponiveis" << endl
                  << "3 - Verificar assento" << endl
                  << "4 - Proximo assento livre" << endl
                  << "5 - Ocupar assento" << endl
                  << "6 - Sair" << endl;
        std::cin >> op;

        if(op == 1){
            std::cout << "Numero do voo: ";
            std::cin >> num;
            std::cout << "Dia Mes Ano: ";
            std::cin >> dia;
            std::cin >> mes;
            std::cin >> ano;
            std::cout << "Hora Minuto Segundo: ";
            std::cin >> hora;
            std::cin >> min;
            std::cin >> seg;

            meusVoos.push_back(Voo(num, Data(dia, mes, ano), Horario(hora, min, seg)));
        }else if(op == 6){
            flag = false;
        }else{
            std::cout << "Numero do voo: ";
            std::cin >> num;

            for(int i = 0; i < 100; i++){
                if(meusVoos[i].getNumVoo() == num){
                    indexVoo = i;
                    break;
                }
                std::cout << "Numero invalido";
                op = -1;
            }

            switch(op){
                case 2:
                    std::cout << "Existem " << meusVoos[indexVoo].vagas() << " vagas disponiveis" << endl;
                    break;

                case 3:
                    std::cout << "Numero do assento: ";
                    std::cin >> cadeira;

                    std::cout << "O assento " << cadeira << "está ";
                    meusVoos[indexVoo].verifica(cadeira) ? std::cout << " ocupado" : std::cout << " livre";
                    std::cout << endl;
                    break;

                case 4:
                    std::cout << "O assento " << meusVoos[indexVoo].proximoLivre() << " está livre" << endl;
                    break;

                case 5:
                    std::cout << "Numero do assento: ";
                    std::cin >> cadeira;

                    if(meusVoos[indexVoo].ocupa(cadeira)){
                        std::cout << "Sucesso" << endl;
                    }else{
                        std::cout << "Cadeira já está ocupada" << endl;
                    }
                    break;

                default:
                    std::cout << "Operacao ou numero invalido" << endl;
                    break;
            }
        }

    }
}