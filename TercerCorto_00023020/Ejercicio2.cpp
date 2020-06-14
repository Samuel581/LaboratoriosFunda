#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std; 

//protoripo de la funcion
int randomn();
//declarando variables
int i=5, n , num_ram;

int main(){
    // guardando el numero magico
    num_ram = randomn();

    for(int i=1; i<=5; i++ ){
        cout << "Inserte 0 para finalizar el juego o inserte un numero para el intento " << i << " : "; cin >> n;
        cout << endl;
        if(n==num_ram){
            cout << "¡Felicidades! Has adivinado el numero misterioso \n";
            break;
        }
        if(n==0){
            break;
        }
        else if(i<5&&n>num_ram){
            cout << "Intenta con un numero menor\n";
        }
        else if(i<5&&n<num_ram){
            cout << "Intenta con un numero mayor\n";
        }
        
    }
    cout << "El juego ha terminado";
    return 0;
}

//variable para obtener un numero random entre el 1 y el 100
int randomn(){
    srand(time(NULL));
    int randomnum = 1 + rand()%100;
    return randomnum;
}