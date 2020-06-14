#include <iostream>

using namespace std;


// Prototipos de funciones
float normalh(float x);
float extrah(float y);
float seguro(float s);
float AFP(float s);
float impuesto(float s);
// Declaracion de variables
float salarior=0,salariot=0,horasnormales,horasextra; 
int empleados;

int main(){
    cout << endl << "Inserte el numero de empleados que desea saber el salario: ";cin >> empleados; cout << endl;

    for(int i=1; i<=empleados; i++){
        cout << "Inserte horas normales trabajadas por el empleado " << i << " : "; cin >> horasnormales;
        cout << "Inserte horas extra trabajadas por el empleado: " << i << " : "; cin >> horasextra; cout << endl;

        salariot = normalh(horasnormales)+extrah(horasextra);

        if(salariot>500){
            salarior=salariot-(seguro(salariot)-AFP(salariot)-impuesto(salariot));
        }
        else{
           salarior=salariot-(seguro(salariot)-AFP(salariot));
        }
        cout << "El salario del empleado " << i << " es de " << salarior << " dolares \n";
    }
    return 0;
}
//Funcion para obtener el pago por horas trabajadas
float normalh(float x){
    float salarionormal = x*1.75;
    return salarionormal;
}
//Funcion para obtener el pago por horas extra trabajadas
float extrah(float x){
    float salarioextra = x*1.75;
    return salarioextra;
}
//Descuento del seguro social
float seguro(float s){
    float seguro = s*0.4;
    return seguro;
}
//Descuento del AFP
float AFP(float s){
    float AFP = s*0.625;
    return AFP;
}
//Descuento del Impuesto sobre la renta
float impuesto(float s){
    float impuesto = s*0.1;
    return impuesto;
}