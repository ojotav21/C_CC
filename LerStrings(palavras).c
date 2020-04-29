#include <stdio.h>
#include <stdlib.h>


//inicio
void main(){
//VAR
char  palavra[255];
//Instrução
printf("digite uma palavra");

//Limpa Buffer
setbuf(stdin, 0);

//Lê a string
fgets(palavra, 255, stdin);

//Limpara casa não utilizada
palavra[strlen(palavra )-1] = '\0';


printf("%s", palavra);

}
