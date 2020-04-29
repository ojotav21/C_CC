#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
//importar biblioteca string #include <string>

using namespace std; // para polpar a printf
int main(){


/*matriz =  [1][2]  0,0 ; 0,1
          [3][4]  1,0 ; 1,1 */

//Criando Matriz
 int matriz [2][2], i, j;
             //x

 //Passando Valores
 matriz [0][0] = 1;
 matriz [0][1] = 2;
 matriz [1][0] = 3;
 matriz [1][1] = 4;

 //lednoo
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
       //cout << "\ni = " << i << " , j = " <<j;
       cout  << "\n" << matriz [i][j] <<"\n";
       }
}
 //Cont
 for(i=0; i<2; i++){
    for(j=0; j<2; j++){
       cin  >> matriz [i][j];
    }
 }
 //lednoo
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
       //cout << "\ni = " << i << " , j = " <<j;
       cout  << "\n" << matriz [i][j] <<"\n";
       }
}

printf("\n");
system("pause");
return 0;
}



