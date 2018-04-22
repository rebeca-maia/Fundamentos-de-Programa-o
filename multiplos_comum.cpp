#include <stdio.h>
#include <stdlib.h>
int main() {
int i,j;
int f,g;
int a=0;
int n;
printf("programa para calcular os multiplos comuns dentro de um intervalo\n");
printf("digite o tamanho do intervalo\n");
scanf("%d", &n);
printf("digite os numeros\n");
scanf("%d", &i);
scanf("%d", &j);
while(n>0){
	if(a==0){
	f=i*a;
	g=j*a;
	}
    if(a>0){
    f=i*a;
	g=j*a;	
	}
	if(f==g){
		printf("%d  ", f);
		
	}
	n--;
	a=a+1;
}
	return 0;
}
