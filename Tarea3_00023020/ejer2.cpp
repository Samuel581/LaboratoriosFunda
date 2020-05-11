/* Realizar un programa en c++ 
que reciba el radio de un círculo
y calcular su área y perímetro. */

#include <iostream>
#include <math.h>

using namespace std;

int main(void)

{
    float r, pe, ar;
    

    cout << "Inserte el radio del circulo: ";
    cin >> r;

    /* M_PI es el valor en la libreria "math.h" para el numero PI */
    pe = 2*M_PI*r;
    ar = M_PI*pow(r,2);

    cout << "El perimetro del cirulo es : " << pe;
    cout << "El area del circulo es: " << ar;
}

