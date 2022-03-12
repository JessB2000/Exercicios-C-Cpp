#include <iostream>
using namespace std;
int main() {
  int N, XP, T, Y, L, A, TY,TL,TA;

  cin >> N >> XP >> Y >> L >> A;

  T=N*XP;
  TY= T+Y;
  TL= T+L;
  TA= T+A;

  cout << "Yoda " << TY << endl;
  cout << "Luke "<< TL << endl;
  cout <<"Ahsoka " << TA << endl;


}
