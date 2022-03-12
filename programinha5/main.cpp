#include <iostream>
using namespace std;
int main() {
  int F, C;

  cin >> F;
  cin >> C;
  int cadeiras[F][C];
  int fila;
  int p=2;
  int escolhas[p];


  for (int i=0; i<F; i++){
      for (int j=0; j<C; j++){
          cin >> cadeiras[i][j];
      }
  }
  for (int i=0; i<F; i++){
      for (int j=0; j<C-1; j++){
          if (cadeiras[i][j]==0 && cadeiras[i][j+1]==0){
              fila=i+1;
              for (int k=1; k<=p; k++){
                 escolhas[k]=j+k;
              }
          }
      }
  }

  cout << "Fileira: " << fila << endl;
  cout << "Assentos: " << escolhas[1] << " e " << escolhas[2];
}
