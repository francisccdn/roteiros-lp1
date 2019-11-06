#include <iostream>
#include <ctime>

using namespace std;

int main(){
  srand(time(NULL));
  int num = rand() % 100;
  int guess = -1;

  while(guess != num){
    cout << "Adivinhe o número entre 1 e 100: ";
    cin >> guess;

    if(guess < num){
      cout << "Muito baixo. Tente novamente" << endl;
    }else if(guess > num){
      cout << "Muito alto. Tente novamente" << endl;
    }
  }

  cout << "Parábens. Você adivinhou o número" << endl;
  return 0;
}
