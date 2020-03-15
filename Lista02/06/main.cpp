#include <iostream>
#include <string>
#include "MesaDeRestaurante.h"
#include "Pedido.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main(){
    RestauranteCaseiro meuRestaurante;
    int m, n, q;
    string d;
    double p;
    int op = 1;

    while(op){
        cout << "Que operacao deseja realizar?" << endl;
        cout << "1 - Total de todas as mesas" << endl << "2 - Cadastrar pedido" << endl;
        cout << "3 - Operacoes na mesa" << endl << "0 - Sair" << endl;
        cin >> op;

        switch (op)
        {
        case 0:
            break;
        
        case 1:
            cout << "A soma de todas as contas é: R$" << meuRestaurante.calculaTotalRestaurante() << endl;
            break;

        case 2:
            cout << "Adicionar pedido a que mesa? ";
            cin >> m;
            cout << "Qual o numero do pedido? ";
            cin >> n;
            cout << "Qual a descricao desse pedido? ";
            cin.ignore();
            getline(cin, d);
            cout << "Quanto custa esse pedido? ";
            cin >> p;
            cout << "Quantos? ";
            cin >> q;

            meuRestaurante.adicionaPedido(m, n, q, d, p);

            cout << "Pedido adicionado!" << endl;

            break;

        case 3:
            cout << "Em que mesa deseja realizar a operacao?" << endl;
            cin >> m;
            cout << "Que operacao deseja realizar?" << endl;
            cout << "1 - Calcular conta" << endl << "2 - Zerar pedidos" << endl;
            cout << "3 - Adicionar pedido" << endl << "0 - Sair" << endl;
            cin >> op;

            switch (op)
            {
            case 0:
                break;

            case 1:
                cout << "O total da mesa " << m << "é: R$" << meuRestaurante.mesa[m].calculaTotal() << endl;
                break;

            case 2:
                meuRestaurante.mesa[m].zeraPedidos();
                cout << "Pedidos zerados!" << endl;
                break;

            case 3:
                cout << "Qual o numero do pedido? ";
                cin >> n;
                cout << "Qual a descricao desse pedido? ";
                cin.ignore();
                getline(cin, d);
                cout << "Quanto custa esse pedido? ";
                cin >> p;
                cout << "Quantos? ";
                cin >> q;

                meuRestaurante.mesa[m].adicionaPedido(n, q, d, p);

                cout << "Pedido adicionado!" << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
                break;
            }
        break;

        default:
            cout << "Opcao invalida!" << endl;
            break;
        }
     }

    cout << endl;

    return 0;
}