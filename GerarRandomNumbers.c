#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Inicio
void main(){

    //Alimentador do Rand
    srand((unsigned)time(NULL));

    //VAR que recebe a divisãp do numero divido por 3 ( aleatorio entre 0 e 2)
    int aleatorio = rand() %3;

    printf("%d", aleatorio);

    //VAR resto por 5 ( 1 entre 5)
    int aleatorioSegundo = (rand() %5) + 1;



    printf("%d", aleatorioSegundo);












system("pause");
}
