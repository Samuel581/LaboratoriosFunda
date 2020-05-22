/*Realizar un programa en c++ que verifique si un número es positivo, negativo
o cero.*/

#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Inserte un numero: "; cin >> numero;

    if (numero == 0){
        cout << endl << "El numero es equitativo a cero";
    }
    else if(numero > 0){                            
        cout << endl << "El numero es mayor a cero";
    }
    else{
        cout << endl << "El numero es menor a cero";
    }
    
    return 0;
}