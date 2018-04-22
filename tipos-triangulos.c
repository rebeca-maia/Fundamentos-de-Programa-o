#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
printf("programa para calcular se 3 numeros podem ser os lados de um triangulo\n");
printf("digite\n");
scanf("%d", &a);
printf("digite\n");
scanf("%d", &b);
printf("digite\n");
scanf("%d", &c);
if((a<(b+c))&&(b<(a+c))&&(c<(b+a))){
   if(a==b&&b==c){
    printf("o triangulo eh equilatero\n");
   }
   if(a!=b&&b!=c&&a!=c){
    printf("o triangulo eh escaleno\n");
   }
   }
   else{
    printf("nao eh um triangulo\n");
   }
   return 0;
}
