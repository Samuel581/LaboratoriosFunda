/*Se necesita crear un sistema, para n estudiantes, que lea sus cinco notas; luego calcule la
nota final de acuerdo a la ponderación de cada nota, y la muestre en pantalla junto con
un mensaje indicando si ha aprobado o reprobado. Cada nota tiene un 20% del 100%.
Crear las funciones que:
-Llene la matriz
-Calcule la nota final y que despliegue si aprobó o reprobó.*/

#include <iostream>

using namespace std;

float notasalumnos[100][5], porcentaje;//declarando variables 
int n;
void matriz(float doblearray[][5], int n);//prototipos de las funciones 
void notafinal(float matriz[][5], int n);

int main(){
    cout << "Inserte la cantidad de alumnos a evaluar: "; cin >> n;
    notasalumnos[n][5];

    matriz(notasalumnos, n);
    cout << endl;
    notafinal(notasalumnos,n);

    return 0;
}

//funcion llenar matriz
void matriz(float matriz[][5], int n){
    for(int a=0; a<n; a++){
        cout<< endl << "---------Notas del alumno " << a+1 << "-----------" << "\n";
        for(int b=0; b<5; b++){
            cout << "Inserte la nota " << b+1 << " : ";
            cin >> matriz[a][b];
        }
    }
}

//funcion nota final y aprobacion de curso
void notafinal(float matriz[][5], int n){
    for(int a=0; a<n; a++){
        float promedio=0;
        for(int b=0; b<5; b++){
            porcentaje = matriz[a][b]*0.2;
            promedio += porcentaje;
        }
        cout << endl << "El promedio del alumno " << a+1 << " es " << promedio << "\n";
        if(promedio<6){
            cout << "El alumno ha reprobado el curso" << endl;
        }
        else{
            cout << "El alumno ha aprobado el curso" << endl;
        }
    }
}