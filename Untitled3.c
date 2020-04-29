#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <stdbool.h>, para poder usar booleano ( VDDR OU FALSE)

void main() {

//definir variables
int a;
float b;
char c;
bool d;
//float, para numeros com virgula
//char, para caracteres.

// atriburi valores
a = 5;
b = 6.62607004;
c = 'a';
d = true; //true=1, false=0
//escreval
printf("\n valor de A =: % d",a);
printf("\n valor de B =: % .3f",b);
printf("\n valor de C =: % c",c);
printf("\n valor de D =: % d\n",d);
//%d procura a variavel

//leia valores (leia)
scanf("%d", &a );
scanf("%f", &b);
scanf(" %c", &c);
scanf("%d", &d );// entende booleano como inteiro 0 ou 1
//escrevalS
printf("\n O valor de A =: %d", a);
printf("\n O valor de B =: %.3f", b);
printf("\n O valor de C = %c", c);
printf("\n O valor de D =: %d\n", d);

system( "pause");

//& procura a variavel que quer ler
//%f para ler
// se colocar .x ,antes do f, limita o numero de casas decimais
}
