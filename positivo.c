#include <stdio.h>
#include <stdlib.h>

// Crie uma fun��o que receba um valor e informe se ele � positivo ou n�o.


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



