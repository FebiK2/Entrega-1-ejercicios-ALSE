/* Primero, debemos encontrar una forma de ir almacenando los precios de los productos.
Podríamos crear un array de longitud de los productos que se quieran ingresar, y así, posteriormente
recorrer el array e ir sumando sus elementos internos para calcular el subtotal. Después se toma el
subtotal y se multiplica por 0.08 para tomar el 8% por el impuesto y ése valor se le suma al subtotal para
obtener el costo total. Por último, debemos evaluar con un condicional si el costo total es aplicable para
descuento, en caso de serlo, se le resta el 10%, en caso de no serlo, se deja igual. Al final de todo
el procedimiento se aproxima a 2 decimales */

#include <iostream>
#include <array>   // Librería para hacer arreglos
#include <iomanip> // Librería para hacer el redondeo
using namespace std;

int main()
{
    int productos; /* Debemos crear una variable para ingresar el número de productos y así pedir los
    precios hasta llegar a la cantidad de productos */

    float precio;   // Creamos una variable para pedir el precio del producto
    float impu;     // Creamos una variable para guardar el impuesto
    float subt = 0; // Creamos una variable para calcular el subtotal
    double costo;   // Variable que entregará el costo total

    cout << "Ingrese cantidad de productos : ";
    cin >> productos;
    cout << "\n";

    int array[productos]; // Hacemos un arreglo de longitud de la cantidad de productos deseada

    for (int i = 0; i < productos; i++)
    {
        cout << "Ingrese precio de producto " << i + 1 << " : ";
        cin >> precio;
        array[i] = precio; // Cambiamos cada espacio del arreglo por el valor del precio ingresado
    }

    for (int j = 0; j < productos; j++)
    {
        subt = subt + array[j]; // Recorremos cada espacio del array y vamos sumando
    }

    cout << "El subtotal es: " << subt; // Mostramos el subtotal
    cout << "\n";

    impu = subt * 0.08; // Calculamos el impuesto
    cout << "El impuesto es de: " << impu << endl;

    costo = impu + subt; // Calculamos el costo final

    if (costo > 100)
    {
        costo = costo - (costo * 0.1); // Si el costo es mayor a 100, aplicamos un descuento de 10%
        cout << "Costo aplicable para descuento de 10%" << endl;
    }
    else
    {
        cout << "Costo no aplicable para descuento de 10%" << endl;
    }

    cout << "El costo total es de: " << fixed << setprecision(2) << costo << endl;

    /* Se usa "fixed" para que c++ entienda a "setprecision(2)" como aproximaxión a exactamente 2 decimales,
    sino se coloca, se interpreta como aproximación a dos cifras significativas */

    return 0;
}