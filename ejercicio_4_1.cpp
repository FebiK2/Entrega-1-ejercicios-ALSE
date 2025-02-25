#include <iostream>
using namespace std;

int producto(int num1, int num2) // A la función le entran 2 números enteros, sale un dato de tipo entero
{
    return num1 * num2; // Retornamos el valor de la multiplicación
}

int main()
{
    int num1; // Creamos la variable del primer número a multiplicar
    int num2; // Creamos la variable del segundo número a multiplicar
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "El producto es: " << producto(num1, num2) << endl; // Llamamos a la función para obtener el resultado
    return 0;
}