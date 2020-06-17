#include <iostream>
#include <math.h>

using namespace std;

int MCD(int x, int y);//prototipo de la funcion 
int nmayor, nmenor;

int main(){
    cout << "Inserte el numero mayor para el MCD: "; cin >> nmayor;
    cout << "Inserte el numero menor para el MCD: "; cin >> nmenor;

    cout << "El MCD de los numeros anteriores es: " << MCD(nmayor, nmenor);

    return 0; 
}

int MCD(int x, int y){
    int nresiduo;
    do{
        nresiduo=x%y;
        if(nresiduo!=0){
            x=y;//Asignamos el numero mayor al menor para continuar con la operacion
            y=nresiduo;
        }
    }while(nresiduo!=0);
    return y;//Cuando no podamos dividir mas, nuestro resudio sera nuestro MCD
}