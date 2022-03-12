#include <iostream>
#include <string>
using namespace std;
int main() {
  int Q;
  cin >> Q;
  cin.ignore();
  string fcl;
  string ocl;
  string pok[Q];
  string poke;
  int nforce[Q];
  int force;
  cin >> fcl;
  cin >> ocl;

  for (int i=0; i<Q; i++){
    cin >> pok[i] >> nforce[i];
  }

  if (fcl=="N" && ocl=="C"){
   int menor;
   string auxiliar1;

   for (int j=0; j<Q-1; j++){
       menor=j;
       for (int i=j+1; i<Q; i++){
           if (pok[i]<pok[menor]){
            menor=i;
           }
       }
       auxiliar1=pok[j];
       pok[j]=pok[menor];
       pok[menor]=auxiliar1;

      force=nforce[j];
      nforce[j]=nforce[menor];
      nforce[menor] = force;
   }
   for (int i=0; i<Q; i++){
       cout << pok[i] << " " << nforce[i]<< endl;
   }
  }

if (fcl== "N"&& ocl=="D"){
    int maior;
    string auxiliar2;
    for (int j=0; j<Q-1; j++){
     maior=j;
     for (int i=j+1; i<Q; i++){
         if (pok[i]>pok[maior]){
             maior=i;
         }
     }
     auxiliar2=pok[j];
     pok[j]=pok[maior];
     pok[maior]=auxiliar2;

     force=nforce[j];
     nforce[j]=nforce[maior];
     nforce[maior]=force;
    }
  for (int i=0; i<Q; i++){
      cout << pok[i] << " "<< nforce[i] << endl;
  }
}

if (fcl=="L" && ocl=="C"){
  int menor2;
  int auxiliar3;
 for (int j=0; j<Q-1; j++){
     menor2=j;
     for (int i=j+1; i<Q; i++){
         if (nforce[i]<nforce[menor2]){
             menor2=i;
         }
     }

    auxiliar3=nforce[j];
    nforce[j]=nforce[menor2];
    nforce[menor2]=auxiliar3;

    poke= pok[j];
    pok[j]= pok[menor2];
    pok[menor2]=poke;

 }
  for (int i=0; i<Q; i++){
      cout << pok[i] << " " << nforce[i] << endl;
  }
}
if (fcl=="L" && ocl=="D"){
    int maior2;
    int auxiliar4;

    for (int j=0; j<Q-1; j++){
    maior2=j;
    for (int i=j+1; i<Q; i++){
        if (nforce[i]>nforce[maior2]){
            maior2=i;
        }
    }
    auxiliar4=nforce[j];
    nforce[j]=nforce[maior2];
    nforce[maior2]=auxiliar4;

    poke = pok[j];
    pok[j]=pok[maior2];
    pok[maior2]=poke;
    }
  for (int i=0; i< Q; i++){
      cout << pok[i]<<" "<<nforce[i]<< endl;
  }
}
}
