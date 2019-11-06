#include <iostream>
#include <ctime>

using namespace std;

int main(){
  srand(time(NULL));
  int n;
  int results[6] = {0};

  cout << "Digite quantas vezes o dado será lançado: ";
  cin >> n;

  for(int i = 0; i < n; i++){
    int diceRoll = (rand() % 6) + 1;
    results[diceRoll-1]++;
  }

  for(int i = 0; i < 6; i++){
    cout << i+1 << " apareceu " << ((double)results[i]/n)*100 << "% das vezes." << endl;
  }

  return 0;
}
