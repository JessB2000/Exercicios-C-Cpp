#include <iostream>
#include <string>
using namespace std;

int main() {
 string palavra1;
 string palavra2;
 int i;

 getline(cin, palavra1);

 for (i=palavra1.size()-1; i>=0; i--){
    palavra2 += palavra1[i];
 }

 if (palavra1==palavra2){
     cout << "Sim"<< endl;
 }
 else {
     cout <<"Nao"<< endl;
 }
}

