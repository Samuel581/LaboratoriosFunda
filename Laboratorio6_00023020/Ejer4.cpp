/*Dados dos arreglos de igual longitud, escriba un programa que genere un tercer arreglo
cuyos valores corresponden a la suma de los elementos de las mismas posiciones de
los dos arreglos anteriores. Escriba funciones para:
a) Leer arreglo. Esta función recibe dos argumentos: un arreglo y la cantidad de
elementos a leer; luego llena el arreglo.
b) Realizar la suma de arreglos. Esta función recibe cuatro argumentos: los dos
arreglos, la longitud de ambos y el arreglo resultante de la suma.
c) Desplegar el resultado. Recibe el arreglo resultante de la suma y despliega su
contenido.
d) La función main. Que obviamente controla las llamadas a las funciones de los
literales anteriores.*/

#include <iostream>

using namespace std;

int n;
//prototipos de funciones
void leer(int array[], int n);
void suma(int arrayA[], int arrayB[], int arrayC[], int n );
void resultado(int arrayC[], int n);

int main(){
    
    cout << "Inserte el numero de elementos que tendran los arreglos: "; cin >> n;
    int array1[n-1];
    cout << endl << "Inserte los elementos del primer arreglo" << endl;
    leer(array1, n);
    int array2[n-1];
    cout << endl << "Inserte los elementos del segundo arreglo" << endl;
    leer(array2, n);
    int array3[n-1];
    cout << endl;
    suma(array1, array2, array3, n);
    resultado(array3, n);

    return 0;
}

//funcion para leer elementos de un array
void leer(int array[], int n){
    int a;
    for(int i=0; i<n; i++){  
        cout << "Inserte un numero para el elemento " << i << " : "; cin >> a; array[i] =a ;
    }
}

//funcion para sumar dos array y poner el resultado en otro array
void suma(int arrayA[], int arrayB[], int arrayC[], int n){
    for(int i=0; i<n; i++){
        arrayC[i]=(arrayA[i]+arrayB[i]);
    }
}

//funcion para mostrar el resultado
void resultado(int arrayC[], int n){
    cout << "-----------La suma total------------"<< endl;
    for(int i=0; i<n; i++){
        cout << "La suma de los array en el elemento " << i << " es: " << arrayC[i] << endl;
    }
}