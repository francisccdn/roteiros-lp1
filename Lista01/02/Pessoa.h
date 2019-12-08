#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa{
private:
  std::string nome;
  std::string telefone;
  int idade;

public:
  Pessoa(std::string n);
  Pessoa(std::string n, std::string t, int i);

  void setIdade(int i);
  void setNome(std::string n);
  void setTel(std::string t);

  int getIdade();
  std::string getNome();
  std::string getTel();
};

#endif //PESSOA_H
