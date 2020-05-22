/*Realizar un programa en c++ que verifique si un número es par o impar*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int numero;

    cout << "Inserte un numero: "; cin >> numero;

    if (numero%2 == 0){
        cout << endl << "El numero que usted ha ingresado es par";
    }
    else {
        cout << endl << "El numero que usted ha ingresado es impar";
    }
    
    return 0;
}