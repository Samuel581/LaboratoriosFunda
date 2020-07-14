#include <iostream>

using namespace std;

const int longCad = 20;//Declaramos el valor constante

struct costoPorArticulo//Declaramos la esructura
{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

void leerArticulo( costoPorArticulo [],int );//declaramos los protipos de las funciones
void calcularCoste( costoPorArticulo [],int );
void desplegarDatos( costoPorArticulo [], int );
float costeTotal( costoPorArticulo [], int);

int main(){//Funcion main
    int cantidadArticulos; // declaramos cantidadArticulos como int para usarlo mas adelante 
    cout << "Ingrese la cantidad de productos a procesar: "; cin >> cantidadArticulos;// pedimos la cantidad de productos a procesar
    cout << endl;
    costoPorArticulo arregloArticulos[cantidadArticulos];//declaramos el array
    //usamos las variables
    leerArticulo( arregloArticulos,cantidadArticulos);
    cout << endl << "<---------------- Facturacion ------------------->" << endl << endl;
    calcularCoste( arregloArticulos,cantidadArticulos);
    desplegarDatos( arregloArticulos,cantidadArticulos);
    cout << "El coste total de sus productos es de $" << costeTotal(arregloArticulos,cantidadArticulos) << '\n';

    return 0;
};

void leerArticulo(costoPorArticulo array[],  int n){//funcion para leer un articulo
    for(int i=0; i<n; i++){//usamos un FOR para recorrer mejor el array
        cin.ignore(100, '\n');//usamos este comando para que no tengamos errores al usar cin.getline
        cout << "Inserte el nombre del Articulo: ";//pedimos el nombre del articulo y lo almacenamos
        cin.getline(array[i].nombreArticulo, longCad + 1, '\n');
        cout << "Inserte la cantidad de Articulos: "; cin >> array[i].cantidad;//pedimos la cantidad del articulo y lo almacenamos
        cout << "Inserte el precio unitario: "; cin >> array[i].costoPorArticulo;//pedimos el precio unitario y lo guardamos
        cout << endl;
    }
};

void calcularCoste(costoPorArticulo array[],  int n){//funcion coste total de los articulos
    for(int i=0; i<n;i++){//usamos un FOR para recorrer mejor el arrray
        array[i].precio = ((array[i].cantidad) * (array[i].costoPorArticulo));//multiplicamos el precio unitario por la cantidad de articulos
    }                                                                         //...para obtener el precio total y guardamos

    
};

void desplegarDatos(struct costoPorArticulo array[],  int n){//funcion para desplegar datos
    for(int i=0;i<n;i++){//usamos un FOR para recorrer mejor el arrray
        cout << "Nombre del articulo: " << array[i].nombreArticulo << endl;//mostramos en pantalla el nombre del articulo
        cout << "Cantidad de articulos: " << array[i].cantidad << endl;//mostramos en pantalla la cantidad del articulo
        cout << "Precio por todos los articulos: " << array[i].precio << endl;//mostramos en pantalla el precio total de los articulos
        cout << "Precio unitario del articulo: " << array[i].costoPorArticulo << endl;//mostramos en pantalla el precio unitario del articulo
        cout << endl;

    }
};

float costeTotal(struct costoPorArticulo array[], int n){//funcion para encontrar y mostrar el coste total de la factura
    float costeTotal = 0;//definimos una variable y le asignamos un valor 0 para evitar problemas con valores basura
    for(int i=0;i<n;i++){//usamos un FOR para recorrer mejor el arrray
        costeTotal += array[i].precio;//cada precio total del articulo se suma al coste total de la compra 
    };
    return costeTotal;//retornamos el coste total
};





