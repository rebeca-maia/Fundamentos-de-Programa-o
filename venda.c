#include <stdio.h>
#include <stdlib.h>
//Padrão sequencia numerica selecionada
int main()
{
    int i=0; int dia,venda;long int aux=0;
    while(i<30){
        printf("Digite um valor para as vendas do dia:");
        scanf("%i", &venda);
        if(venda>aux){
            aux=venda;
            dia=i+1;
        }
        i++;
    }
    printf("Maior dia de venda: %d",dia);
    printf("total: %d", aux);


    return 0;
}
