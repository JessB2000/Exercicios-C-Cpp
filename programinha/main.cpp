#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  cin.ignore();
  string nomes[N];
  int vetor1[N];
  for (int i=0; i<N; i++){
      cin >> nomes[i];
      cin >> vetor1[i];
      cin.ignore();
  }
  int num;
  int esq;
  int dir;
  int meio;
  cin >> num;
  cin.ignore();
  string nomes2[num];
  int vetor2[num];
  int result=0;
  for (int i=0; i<num; i++){
    cin >> nomes2[i];
    cin >> vetor2[i];
    cin.ignore();
    esq=0;
    dir=N-1;
    while (esq<=dir){
        meio=(esq+dir)/2;
        if (nomes2[i]==nomes[meio]){
          break;
        }
        if (nomes2[i]<nomes[meio]){
           dir=meio-1;
        }
        else{
            esq=meio+1;
        }
    }
    if (nomes2[i]==nomes[meio])
    {
       result+=vetor1[meio]*vetor2[i];
   }

  }
   cout << result << endl;
}
