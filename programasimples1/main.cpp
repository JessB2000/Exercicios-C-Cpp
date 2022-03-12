#include <iostream>
using namespace std;
int main() {
  int i, N, F;
  float F2;

  cin >> N;

  int vetor1[N];

  for (i=0; i<N; i++){

  cin >> vetor1[i];

}
cin >> F;

int vetor2[N];

for (i=0; i<N; i++){

    if (vetor1[i]>= (float)F/2){
    cout << i << endl;
    }
}

}
