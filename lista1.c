#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Lista de Exercícios de Matrizes */

/* Q1: Faça uma função que preencha uma linha matriz 20x20 com 1 e outra linha com 0
 e assim sucessivamente.*/
void preenche_matriz_um_e_zero(int mat[20][20])
{
    int a;
    int b;
    a=0;
    b=0;
    while(a<20){
        while(b<20){
            if(a%2==0){
             mat[a][b]=1;
             }
             else{
             mat[a][b]=0;
             }
        b++;
        }
        a++;
        b=0;
    }

}

/* Q2: Preencha uma matriz 20x20 com 1 na diagonal principal e com 0 os demais elementos.*/
void preenche_matriz_diagonal_principal(int mat[20][20])
{   int a;
    int b;
    a=0;
    b=0;
    while(a<20){
        while(b<20){
            if(a==b){
            mat[a][b]=1;
            }
            else{
            mat[a][b]=0;
            }
            b++;
        }
        a++;
        b=0;
    }

}

/* Q3: Receba uma matriz 4x4 e retorne o maior valor.*/
int maior_valor_matriz(int matriz[4][4])
{
    int a;
    int b;
    a=0;
    b=0;
    int arm;
    arm=0;
    while(a<4){
        while(b<4){
            if(arm<matriz[a][b]){
                arm=matriz[a][b];
            }
            b++;
            }


        a++;
        b=0;
    }

	return arm;
}

/* Q4: Somar todos os elementos da matriz 3x3 passada */
int somar_todos(int matriz[3][3])
{
    int a=0;
    int b=0;
    int arm=0;
    while(a<3){
        while(b<3){
            arm=arm+matriz[a][b];
            b++;
        }
        a++;
        b=0;
    }
    return arm;
}

/* Q5: Receba uma matriz 4 x 4 e troque os valores da 1ª linha pelos da 4ª linha, vice-e-versa. */
void troca_valores(int matriz[4][4])
{
    int a=0;
    int arm=0;
    while(a<4){
            arm=matriz[0][a];
            matriz[0][a]=matriz[3][a];
            matriz[3][a]=arm;
            a++;
        }
}

/* Q6: Matriz simetrica: Verifique se uma matriz e simetrica.
OBS:Lembre que uma matriz M é simétrica é aquela onde M[linha,coluna] = M[coluna,linha].*/

bool matriz_simetrica(int matriz[3][3])
{   int a=0;
    int b=0;
    while(a<3){
        while(b<3){
            if(matriz[a][b] != matriz[b][a]){
            return false;
            }
            b++;
        }
        a++;
        b=0;
    }
    return true;
}

/* Q7: Quadrado magico - Dizemos que uma matriz quadrada inteira é um quadrado magico se a soma dos
elementos de cada linha, a soma dos elementos de cada coluna e a soma dos
elementos das diagonais principal e secundária são todas iguais.
Retorne verdadeiro(true) se a matriz é uma quadrado mágico ou falso(false) caso contrário*/

bool quadrado_magico(int matriz[3][3])
{
    int a=0;
    int b=0;
    int arm1=0;
    int arm2=0;
    int arm3=0;
    int c1=0;
    int c2=0;
    int c3=0;
    int dp=0;
    int ds=0;
    while(a<3){
        while(b<3){
            if(a==0){
            arm1=arm1+matriz[a][b];
            c1=c1+matriz[b][a];
            if(b==2){
            ds=ds+matriz[a][b];
            }
            }
            if(a==1){
            arm2=arm2+matriz[a][b];
            c2=c2+matriz[b][a];
            if(b==1){
            ds=ds+matriz[a][b];
            }
            }
            if(a==2){
            arm3=arm3+matriz[a][b];
            c3=c3+matriz[b][a];
            if(b==0){
            ds=ds+matriz[a][b];
            }
            }
            if(a==b){
            dp=matriz[a][b]+dp;
            }
            b++;
        }
        a++;
        b=0;

    }
    if(arm1!=arm2 || arm1!=arm3){
        return false;
    }
    if(c1!=c2 || c1!=c3){

        return false;
    }
    if(ds!=dp){
        return false;
    }
    if(ds!=c1 || arm1!=ds){
    return false;
    }
    return true;
}


/*Funções de teste*/

void test_preenche_matriz_um_e_zero()
{
    printf("------------------------------------\n");
    printf("teste Q1: preenche_matriz_um_e_zero.\n");
    bool certo = true;
    int mat[20][20];
    preenche_matriz_um_e_zero(mat);
    int i=0,j=0;
    for(i=0; i<20;i++){
        for(j=0;j<20;j++){
            if((i%2==0 && mat[i][j]!=1) || (i%2==1 && mat[i][j]!=0)) certo = false;
        }
    }

    if(certo){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}


void test_preenche_matriz_diagonal_principal()
{
    printf("------------------------------------\n");
    printf("teste Q2: preenche_matriz_diagonal_p.\n");
    bool certo = true;
    int mat[20][20];
    preenche_matriz_diagonal_principal(mat);
    int i=0,j=0;
    for(i=0; i<20;i++){
        for(j=0;j<20;j++)
            if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j]!=0)) certo = false;
    }

    if(certo){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }

}

void test_maior_valor_matriz()
{
    printf("------------------------------------\n");
    printf("teste Q3: maior_valor_matriz.\n");
    int mat[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};

    if(maior_valor_matriz(mat) == 13){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}


void test_somar_todos()
{
    printf("------------------------------------\n");
    printf("teste Q4: somar_todos.\n");
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    if(somar_todos(mat) == 45){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}

void test_troca_valores()
{
    printf("------------------------------------\n");
    printf("teste Q5: troca_valores.\n");
    int mat[4][4]={{1,2,3,4},{1,1,1,1},{1,1,1,1},{4,3,2,1}};
    troca_valores(mat);
    if(mat[0][0]==4 && mat[0][1]==3 && mat[0][2]==2
            && mat[0][3]==1 && mat[3][0]==1 && mat[3][1]==2
            && mat[3][2]==3 && mat[3][3]==4){
        printf("    ok.\n");

    }else{
        printf("    not ok.\n");
    }
}

void test_matriz_simetrica()
{
    printf("------------------------------------\n");
    printf("teste Q6: matriz_simetrica.\n");
    int mat[3][3]={{1,2,0},{0,7,4},{0,4,3}};
    if(matriz_simetrica(mat) == false){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}

void test_quadrado_magico()
{
    printf("------------------------------------\n");
    printf("teste Q7: quadrado_magico.\n");
    int mat[3][3]={{2,7,6},{9,5,1},{4,3,8}};
    if(quadrado_magico(mat) == true){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");

    }

}

int main()
{
    /*Chamada das funções de teste.*/
    test_preenche_matriz_um_e_zero();
    test_preenche_matriz_diagonal_principal();
    test_maior_valor_matriz();
    test_somar_todos();
    test_troca_valores();
    test_matriz_simetrica();
    test_quadrado_magico();

    return 0;

}
