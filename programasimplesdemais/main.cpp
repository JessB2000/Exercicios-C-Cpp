#include <iostream>
using namespace std;
int main() {
int N;
int Z=1;
int i;
int A, B;
int soma1=0;
int soma2=0;
cin >> N;
while (N!=0){
for (i=0; i<N; i++) {
    cin >> A >> B;
    soma1=soma1+A;

    soma2=soma2+B;
}
cout << "Teste " << Z << endl;
if (soma1>soma2)
    cout << "Aldo" << endl;

else
   cout << "Beto" << endl;

   soma1=0;
   soma2=0;

Z++;
cin >> N;
}
}
