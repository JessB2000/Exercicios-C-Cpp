#include <iostream>
using namespace std;
int main() {
int M, N, i;
int soma=0;

cin >> M;

cin >> N;

int XP[N];
int Bonus_de_Xp[N];
int mult[N];

for (i=0; i<N; i++){

    cin >> XP[i];
}
for (i=0; i<N; i++){
    cin >> Bonus_de_Xp[i];
}
for (i=0; i<N; i++){

mult[i]= XP[i]*Bonus_de_Xp[i];
soma=soma+mult[i];
}
if (soma>=M){
    cout << "Upou de Nivel!"<< endl;
}
else{

    cout << "Nao foi dessa vez!"<< endl;
}
}
