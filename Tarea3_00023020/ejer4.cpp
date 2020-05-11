/*Realizar un programa en c++ que reciba 1 
producto comprado (nombre, precio y cantidad comprada) 
y mostrar el total de dinero gastado.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    string name;
    float price, quanty, total;
    cout << "Inserte nombre del producto: ";
    cin >> name;
    cout << "Inserte precio del producto: ";
    cin >> price;
    cout << "Inserte cantidad del producto: ";
    cin >> quanty;

    total = price * quanty;

    cout << "El precio final de su " << name << " con cantidad de " << quanty << " producto(s) es de " << total;

}