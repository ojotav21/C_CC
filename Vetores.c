#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Inicio
void main(){
        //Vetor, variavel com varias variaveis dentro
        // int vetor [x] sendo X o numero de posições;
        int vetor[3];
        int cont;
        //Atribuindo Valor
        vetor [0] = 5;       //Contagem começa em zero
        vetor [1] = 10;
        vetor [2] = 15;
        vetor [3] = 20;

        //Exibindo os Valores do vetor
        printf("\n--------------------------");
        printf("\n Posicao do vetor em 0: %d", vetor[0]);
        printf("\n");
        printf("\n Posicao do vetor em 1: %d", vetor[1]);
        printf("\n");
        printf("\n Posicao do vetor em 2: %d", vetor[2]);
        printf("\n");
        printf("\n Posicao do vetor em 3: %d", vetor[3]);
        printf("\n");

        printf("\n--------------------------");
        //Imprimindo em Laço
        //cont começa em zeoo. vai te ser igual a 3; contador
        // cont = começo; ate onde vai(usando expressoes); contador;
        for(cont = 0; cont <TAM; cont++){
        printf("\n Posicao do vetor em %d: %d", cont, vetor[cont]);
        printf("\n");
        }
        printf("\n--------------------------");
        printf("\n");
        //Lendo 3 novos Valores
        for(cont = 0; cont <TAM; cont++){
        scanf("\n%d", &vetor[cont]);
        }
        printf("\n--------------------------");

        for(cont = 0; cont <TAM; cont++){
        printf("\n Posicao do vetor em %d: %d", cont, vetor[cont]);
        printf("\n");
        }

        printf("\n--------------------------");





printf("\n");
system("pause");
}

