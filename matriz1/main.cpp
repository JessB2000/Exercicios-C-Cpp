#include <iostream>
#include <math.h>
using namespace std;
#include <iostream>
using namespace std;
int main() {
int N, M;
int i,j;
int b=0;
int k=0;
int A;
int L, C;

cin >> N;
cin >> M;

int matrizA[N][M];

for (i=0; i<N; i++){
 for (j=0; j<M; j++){
   cin >> matrizA[i][j];
   if (matrizA[i][j]==1){
     b++;
   }
  }
}

 cin >> A;

for (i=0; i<A; i++){

    cin >> L >> C;

if (matrizA[L-1][C-1]==1){

 k++;
   }
     }

     if (b==k){
         cout << "HASTA LA VISTA BABY"<< endl;
     }
     else {

         cout << "I'LL BE BACK" << endl;
     }

 }


}
