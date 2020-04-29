#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
//importar biblioteca string #include <string>

using namespace std; // para polpar a printf

int main(){

//criar string
string palavra;

//Imprimir na tela
cout << "Digite uma palavra";

//ler string
cin >> palavra;

cout << "\nA palavra eh:" << palavra;
//std::cin >> Variavel

//imprimir
cout << palavra;

//std::cout << variavel
printf("\n");
system("pause");
return 0;

/*NÃO SE USA VOID MAIN EM C++
USA-SE RETURN 0;


Concatenar
cout << "\nA palavra eh:" << palavra; */

}
//tirar o std:: sou usar antes do int main, using namespace
