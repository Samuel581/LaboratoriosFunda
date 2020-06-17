/*Construya un programa que lea la hora, hh, mm y ss, en el modo de 24
horas. Luego calcule y despliegue cuál es la hora un segundo después.*/

#include <iostream>
#include <ctime>
#include <time.h>

using namespace std;

int hour, minu, sec;
void time1sec();//prototipo de la funcion

int main(){ 
    time1sec();//usando la funcion
    return 0;
}

void time1sec(){// con esta funcion obtenemos la hora actual del dispositivo
    time_t now = time(0);
    tm * time = localtime(&now);
    cout << "La hora actual son la(s) " << time->tm_hour << " hora(s) con " << time->tm_min << " minuto(s) y " << time->tm_sec << " segundo(s) \n";
    hour = time->tm_hour; // usamos las librerias de tiempo para asignar los valores del tiempo actual como variables
    minu = time->tm_min;
    sec = time->tm_sec;
    sec++;
    if(sec>59){
        minu++;
    }
    if(minu>59){
        hour++;
    }
    if(hour>23){
        hour=0;
        minu=0;
        sec=0;
    }
    cout << "\nLa hora actual mas 1 segundo despues son la(s) " << hour << " hora(s) con " << minu << " minuto(s) y " << sec << " segundo(s)";
}