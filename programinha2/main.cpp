#include <iostream>
using namespace std;
int main() {
  int X, Y, Z, A, B, C, Pfx,Pfy,Pfz;
  A=100;
  B=500;
  C=1000;
 cin >> X >> Y >> Z;

Pfx=(X*A);
Pfy=(Y*B)-((Y*B)/10);
Pfz=(Z*C)-((Z*C)/10);

cout << Pfx+Pfy+Pfz <<endl;




}
