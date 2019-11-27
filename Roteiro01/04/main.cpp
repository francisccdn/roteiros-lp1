#include <iostream>

#define NUM_JOGADORES 23

using namespace std;

int main(){
  int players[NUM_JOGADORES] = {0};
  int input = -1, nVotos = 0;
  int bestPlayer = 0;

  cout << "Enquete: Quem foi o melhor jogador?" << endl;
  while(input){
    cout << "Número do jogador (0=fim): ";
    cin >> input;

    if(input < 0 || input > NUM_JOGADORES){
      cout << "Informe um valor entre 1 e " << NUM_JOGADORES << " ou 0 para sair!" << endl;
    }else if(input == 0){
      break;
    }else{
      players[input-1]++;
      nVotos++;
    }
  }

  cout << endl << "Resultado da votação: " << endl;
  cout << "Foram computados " << nVotos << " votos." << endl;
  cout << "Jogador\tVotos\t%" << endl;
  for(int i = 0; i < NUM_JOGADORES; i++){
    if(!players[i]){
      continue;
    }

    if(players[bestPlayer] < players[i]){
      bestPlayer = i;
    }

    cout << i+1 << "\t" << players[i] << "\t" << ((double)players[i]*100)/nVotos << "%" << endl;
  }

  cout << "O melhor jogador foi o número " << bestPlayer+1 << ", com " << players[bestPlayer] << " votos, ";
  cout << "correspondendo a " << ((double)players[bestPlayer]*100)/nVotos << "% do total de votos" << endl;

  return 0;
}
