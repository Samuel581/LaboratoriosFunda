/*Realizar un programaen c++ que reciba 
a, b y c y nos devuelva el resultado de 
la fórmula cuadrática.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    double a, b, c;
    double x1, x2;

    cout << "Inserte el valor del elemento a :";
    cin >> a;
    cout << "Inserte el valor del elemento b :";
    cin >> b;
    cout << "Inserte el valor del elemento c :";
    cin >> c;

    x1 = (-b - sqrt( pow(b,2) - 4 * a * c)) / (2 * a);
    x2 = (-b + sqrt( pow(b,2) - 4 * a * c)) / (2 * a);

    cout << "El primer valor del primer valor " << x1 << " y el segundo valor es " << x2;


}