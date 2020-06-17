#include <iostream>

using namespace std;

bool bisiesto(int y);//prototipo de la funcion
int year;

int main(){
    cout << "Inserte un año: "; cin >> year;
    if(bisiesto(year)==true){//usando la funcion
        cout << "\nEl año es bisiesto";
    }
    else{
        cout << "\nEl año no es bisiesto";
    }
}

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