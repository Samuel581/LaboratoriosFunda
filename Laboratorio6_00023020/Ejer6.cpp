/*Escriba un programa que, dado un arreglo y un número entero, cuente cuantas veces
se repite dicho número en el arreglo.*/

#include <iostream>

using namespace std;

int n, na, c,nrepetido;

int main(){
    cout << "Inserte el numero a buscar en el arrary: "; cin >> nrepetido;
    cout << "Inserte la cantidad de elementos que tendra el arreglo: "; cin >> n; cout << endl;
    int array[n-1];
    for(int i=0; i<n; i++){
        cout << "Inserte el numero para el elemento " << i << " : "; cin >> na;
        array[i]=na;
        if(array[i]==nrepetido){
            c++;
        }
    }
    cout << endl << "El numero de veces que se repite el numero solicitado son: " << c;
    return 0;
}
