#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> numVec;
  int in = 1, biggest = 0;

  while (in) {
    cout << "Digite um valor (0 encerra): ";
    cin >> in;

    numVec.push_back(in);
  }

  for(int i = 0; i < numVec.size(); i++){
    if(numVec[i] > biggest){
      biggest = numVec[i];
    }
  }

  cout << "O maior valor foi: " << biggest << endl;

  return 0;
}
