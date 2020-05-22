 /*Realizar un programa en c++ que verifique si la palabra ingresada inicia y
finaliza con la misma letra*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char palabra[100];
    int longitud;

    cout << "Ingrese una palabra: ";
    cin.getline(palabra,100);
    
    longitud = strlen(palabra)-1;

    if (palabra[0] == palabra[longitud]){
        cout << "La primera y ultima letra son iguales";
    }
    else{
        cout << "La primera y ultima letra NO son iguales";
    }

    return 0;
}