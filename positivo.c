#include <stdio.h>
#include <stdlib.h>

// Crie uma função que receba um valor e informe se ele é positivo ou não.


int EhPositivo(int a){
	printf("\nDigite um numero inteiro.");
	scanf("%d",&a);
	if(a>=0){
		printf(" %d eh positivo",a);
	} else
	printf("%d nao eh positivo",a);
return a;
}
int main( ) {
	int result,x;
    result=EhPositivo(x);


	return 0;
}



