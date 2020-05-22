/* Realizar un programa en c++ que verifique si un número es divisible entre
otro.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;

    cout << "Inserte literal a: "; cin >> a; // cout y cin en una misma linea para ahorrar espacio
    cout << "Inserte literal b: "; cin >> b;

    if (a==0 || b==0){
        cout << endl  << "Ha insertado un numero cero por lo tanto la operacion es invalida;";
    }
    
    else if (a%b == 0){  //Para ahorrar espacio los concadeno asi
        cout << endl <<  "El literal a si es divisible entre el literal b";
    }
    else{
        cout << endl << "El literal a no es divisible entre b";
    }
    return 0;
}