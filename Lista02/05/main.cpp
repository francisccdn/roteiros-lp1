#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ifstream in("teste.txt", ios::in);
    ofstream out("teste_bkp.txt", ios::out);

    if(!in.is_open() || !out.is_open())
    {
        cerr << "Nao foi possivel abrir arquivo." << endl;
    }

    char c;

    while(!in.eof())
    {
        in.get(c);
        out << c;
    }

    in.close();
    out.close();

    return 0;
}