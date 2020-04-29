#include <stdio.h>
#include <stdlib.h>


void main() {

//VAR


int opcao;
while (opcao <= 1 || opcao <3){
    //Interface
printf("Escolha uma opcao:");
printf("\n1- Opcao  A ");
printf("\n2- Opcao  B ");
printf("\n3- Opcao  C \n\n");

        //lendo

        scanf("%d", &opcao);
printf("\n");
        switch(opcao){
        case 1:
         printf("\nOpcao  1 \n");
         break;
        case 2:
         printf("\n1Opcao  2\n");
           break;
            case 3:
         printf("\nOpcao  3 \n");
            break;
        default:
            printf("Opcao Invalida \n");
            break;
}



}
printf("\n");
system("pause");
}


//TAB - espaça a linha.
