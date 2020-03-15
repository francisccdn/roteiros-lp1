#pragma once

#include <string>

class Funcionario
{
private:
    std::string nome;
    int matricula;

protected:
    double salarioBase;

public:
    Funcionario(std::string, int);
    std::string getNome() { return nome; }
    void setNome(std::string nome) { this->nome = nome; }
    int getMatricula() { return matricula; }
    void setMatricula(int m) { matricula = m; }
    
    virtual double calcularSalario() = 0;
};