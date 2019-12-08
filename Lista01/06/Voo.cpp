#include "Voo.h"

Voo::Voo(int n, Data d, Horario h){
    this->num = n;
    this->data = d;
    this->horario = h;
}

int Voo::proximoLivre(){
    int i = 0;
    while(cadeiras[i]){
        i++; 
    }
    return i;
}

bool Voo::verifica(int i){ 
    return cadeiras[i]; // false = livre | true = ocupada
}

bool Voo::ocupa(int i){
    if(!cadeiras[i]){
        cadeiras[i] = true;
        return true;
    }else{
        return false;
    }
}

int Voo::vagas(){
    int count;
    for(int i = 0; i < 100; i++){
        if(!cadeiras[i]){
            count++;
        }
    }
    return count;
}

int Voo::getNumVoo() { return num; }
Data Voo::getData() { return data; }
Horario Voo::getHorario() { return horario; }