/*Dado un arreglo de caracteres, que deben ser introducidos desde teclado, codifique su
contenido utilizando la clave del murciélago. Recuerde que la equivalencia de esta clave
es así:
m ----> 0 e ----> 5
u ----> 1 l ----> 6
r ----> 2 a ----> 7
c ----> 3 g ----> 8
i ----> 4 o ----> 9
Por ejemplo: te amo, se codifica así: t5 709.
Dentro del programa, debe de crear una función que codifique una letra y devuelva el
número correspondiente según la clave asignada.
Debe de ir recorriendo letra por letra de la frase ingresada y mostrar el resultado después
de aplicar la clave.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void clave(char array[],int n);//prototipo de la funcion
char palabra[100];//declaramos que la cadena de caracteres admitira maximo 100 caracteres
int longitud=0;//inicializamos la longitud en cero para evitar valores basura
int main(){

    cout << "Inserte una palabra: "; cin.getline(palabra, 100, '\n');
    longitud = strlen(palabra)-1;//guardamos la longitud de la cadena en una vaiable, para usarlo despues
    clave(palabra,longitud);
    cout << endl;
    cout << palabra << "\n";

    return 0;
}

//funcion clave murcielago (A.K.A Clave Batman)
void clave(char array[], int n){
    for(int i=0; i<=n; i++){//hacemos un FOR  lo limitamos a la longitud de la palabra insertada
        switch (palabra[i])
        {
        case 'm': palabra[i] = '0'; break;
        case 'u': palabra[i] = '1'; break;
        case 'r': palabra[i] = '2'; break;
        case 'c': palabra[i] = '3'; break;
        case 'i': palabra[i] = '4'; break;
        case 'e': palabra[i] = '5'; break;
        case 'l': palabra[i] = '6'; break;
        case 'a': palabra[i] = '7'; break;
        case 'g': palabra[i] = '8'; break;
        case 'o': palabra[i] = '9'; break;
        }
    }
}