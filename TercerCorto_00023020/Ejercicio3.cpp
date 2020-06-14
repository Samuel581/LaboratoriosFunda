#include <iostream>
using namespace std;

//prototipo de funcion
bool bisiesto(int y);
//declarando variable
int year;

int main(){
    cout << "Inserte un a" << char(164)<< "o: "; cin >> year;
    if(bisiesto(year)==true){
        cout << "\nEl a" << char(164)<< "o es bisiesto";
    }
    else{
        cout << "\nEl a" << char(164)<< "o no es bisiesto";
    }
}

//funcion para saber si año es bisiesto o no
bool bisiesto(int y){
    bool year;
    if(y%400==0){
        year=true;
    }
    else if(y%4==0&&y%100!=0){
        year=true;
    }
    else{
        year=false;
    }
    return year;
}