#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
//VAR
int a =5, opcao = 1 ;

//Condicional Simples
if(a==5) {
    printf(" a variavel A=5 bro");
}


//Numero Par o Impar

if (a % 2 == 1){
 printf("\n a Variavel A is Impar");
 printf("\n");
} else{
  printf("\n a Variavel A is Par");
  printf("\n");
}


system("pause");


//Condicional Composta

if(opcao == 1){
    printf("\n A opcao = 1");
}else if (opcao==2){
      printf("\n A opcao = 2");
}else{
   printf("A variavel is indefinida");
}

system("pause");
//1 = atribuição ; 2 == comparação


// if (condição) {
//programação
//}
}
