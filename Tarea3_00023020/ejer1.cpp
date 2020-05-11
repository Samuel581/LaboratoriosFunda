/*Realizar un programa en c++ 
que devuelva el promedio de 3 números
enteros ingresados por el usuario.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    float a, b, c; 
    float prom;

    cout << "Inserte el primer numero: ";
    cin >> a;
    cout << "Inserte el segundo numero: ";
    cin >> b;
    cout << "Inserte el tercer numero: ";
    cin >> c;

    prom = (a+b+c)/3;
    cout << "El promedio de los numeros insertados es: " << prom << endl;
}


