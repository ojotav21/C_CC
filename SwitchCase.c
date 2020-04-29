#include <stdio.h>
#include <stdlib.h>


//Inicio
void main(){

 //VAR
 int a = 2;
 char b = 'x';



//Codigo de exemplo IF

 if(a==1) {
  printf("\n Opcao escolhida foi a 1");
 }else if ( a==2){
  printf("\n Opcao escolhida foi a 2");
 }else if ( a==3){
  printf("\n Opcao escolhida foi a 3");
 }else{
 printf("\n Opcao invalida");
 }

 //CASO
 switch(a){
 case 1:
      printf("\n Opcao escolhida foi a 1");
     break;

 case 2:
      printf("\n Opcao escolhida foi a 2");
     break;

 case 3:
      printf("\n Opcao escolhida foi a 3");
     break;

 default:
    printf("\n opcao Invalida");
    break;



    //Break funciona como o FIMESCOLHA do visualg
 }
printf("\n");
system("pause");

}
