/*Realizar un programa en c++ que verifique si la palabra ingresada es mayor a
10 caracteres o no y si la longitud es par o impar.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[100];
    int longitud;

    cout << "Inserte una palabra: " << palabra;
    cin.getline(palabra,100);
    cout << endl;

    longitud = strlen(palabra);

    if(longitud>10){
        cout << "La palabra ingresada tiene mas de 10 caracteres" << endl << endl;
    }
    else{
        cout << "La palabra ingresada no tiene mas de 10 caracteres" << endl << endl;
    }

    if(longitud%2==0){
        cout << "La palabra ingresada tiene una cantidad par de caracteres";
    }
    else{
        cout << "La palabra ingresada tiene una cantidad par de caracteres";
    }
    
    return 0;
}