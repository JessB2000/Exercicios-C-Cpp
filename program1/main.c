#include <stdio.h>

int main(void) {
 int N;

 int i;
 int a=0;
 int b=1;
 int soma;

scanf ("%d", &N);

for (i=0; i<N; i++){

soma=a+b;
a=b;
b=soma;

printf("%d \n", soma );
}

}
