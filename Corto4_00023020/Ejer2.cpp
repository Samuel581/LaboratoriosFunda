/*Calcule el promedio de estatura de una clase de 25 alumnos. Decir cuantos se encuentran
arriba de la media y cuantos debajo de la media.
Debe de crear las siguientes funciones:
-Que calcule la media de las estaturas.
-Que compare y cuente la cantidad de estaturas que están arriba de la media y debajo de
la media.*/

#include <iostream>

using namespace std;

float estatura[25], a, suma=0, promedio=0;//declaramos variables y el array
int bajopromedio=0, arribapromedio=0;
float media(float array[]);//prototipos de las funciones 
void sobrebajomedia(float array[], int *bajopromedio, int *arribapromedio);//uso de punteros para un codigo mas limpio y eficiente

int main(){

    for(int i=0; i<25; i++){//llenando el array de datos
        cout << "Inserte la estatura para el alumno " << i+1 << " : "; cin >> a;
        estatura[i]=a;
    }

    cout << "El promedio de la estatura es de " << media(estatura) << " metros" << endl;

    sobrebajomedia(estatura, &bajopromedio, &arribapromedio);

    cout << "Los alumnos que estan arriba del promedio son " << arribapromedio << " alumnos" << endl;
    cout << "Los alumnos que estan abajo del promedio son " << bajopromedio << " alumnos" << endl;

}

//funcion para la media
float media(float array[]){
    float suma=0;
    float promedio=0;
    for(int i=0; i<25; i++){
        suma += estatura[i];
    }
    promedio = suma/25;

    return promedio;
}

//funcion para alumnos que esten abajo o arriba del promedio
void sobrebajomedia(float array[], int *bajopromedio, int *arribapromedio){
    for(int i=0; i<25; i++){
        if(estatura[i]<media(estatura)){
            *bajopromedio = *bajopromedio+1;
        }
        if(estatura[i]>=media(estatura)){
            *arribapromedio = *arribapromedio+1;
        }
    }
}