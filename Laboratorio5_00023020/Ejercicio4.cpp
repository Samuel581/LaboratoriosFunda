#include <iostream>

using namespace std;

int day, month, year;
bool bisiesto(int y){//reutilizando la funcion del año booleano
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

int main(){

    cout << "Inserte un dia: "; cin >> day;
    cout << "Inserte un numero de mes: "; cin >> month;
    cout << "Inserte un año: "; cin >> year;

    if(bisiesto(year)==true && month==2){
        if(day>=1 && day<=29){
            day++;//sumando un dia 
            if(day>29){
                month++;
                day=1;//si al sumar un dia este es mayor al periodo de dias del mes, se pasa al otro mes y se reinician los dias
            }
            cout << "Dia: " << day << " - Mes: " << month << " - Anio: " << year;
        }
    }
    else{
        if(month>12){
            cout << "El mes insertado no es valido";
        }
        else switch (month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if(day>=1 && day<=31){
                day++;
                if(day>31){
                    month++;
                    day=1;
                        if(month>12){
                        year++;//si al sumar un mes y este es mayor a 12, se sumara un año y se reinciaran el dia y el mes
                        month=1;
                        day=1;
                    }
                }
                cout << "Dia: " << day << " - Mes: " << month << " - A\244o: " << year;  
            }
            else{
                cout << "El dia insertado no es valido" << endl;
                break;
            }break;

            case 4: case 6: case 9: case 11:
            if (day>=1 && day <=30){
                day++;
                if(day>30){
                    month++;
                    day=1;
                }
                cout << "Dia: " << day << " - Mes: " << month << " - An\244o: " << year;
            }
            else{
                cout << "El dia insertado no es valido" << endl;
                break;
            }break;
        
            case 2: 
            if(day>=1 && day<=28){
                day++;
                if(day>28){
                    month++;
                }
                cout << "Dia: " << day << " - Mes: " << month << " - A\244o: " << year;
            }
            else{
                cout << "El dia insertado es invalido" << endl;
            }break;
        }
    }
}  