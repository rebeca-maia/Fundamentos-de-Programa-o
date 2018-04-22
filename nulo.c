#include <stdio.h>
#include <stdlib.h>

//1. Crie uma função que receba um valor e diga se é nulo ou não.

int main(){
     int n,result;

    int Nulo(int number);

    result= Nulo(n);

return 0;
}
int Nulo(int number){

   printf("Digite um numero :\n");
   scanf("%d",number);

   if(number!=0){
        printf("%d nao eh nulo",number);
    }else
    printf ("%d eh nulo",number);
return number;
}
