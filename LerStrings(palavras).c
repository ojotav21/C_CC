#include <stdio.h>
#include <stdlib.h>


//inicio
void main(){
//VAR
char  palavra[255];
//Instru��o
printf("digite uma palavra");

//Limpa Buffer
setbuf(stdin, 0);

//L� a string
fgets(palavra, 255, stdin);

//Limpara casa n�o utilizada
palavra[strlen(palavra )-1] = '\0';


printf("%s", palavra);

}
