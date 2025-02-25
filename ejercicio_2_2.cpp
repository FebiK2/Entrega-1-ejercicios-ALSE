// Se incluye la librería iostream para poder utilizar las funciones de entrada y salida de datos
#include <iostream>

// Se incluye la líbreria std para poder utilizar las funciones de entrada y salida de los datos sin escribir std::
using namespace std;

int main(){
    // Ejercicio 2.2
    /* Escribe un programa que utilice operadores lógicos 
    (&&, ||, !) para determinar si un número es par y positivo.
    */
    cout << "Ejercicio 2.2 " << endl;
    // Se define una variable de tipo entero (int) llamada numero para almacenar el número ingresado por el usuario
    int numero;
    // Mediante la función Cin se le asigna a la variable número el valor que el usuario ingresó
    cout << "Ingrese un número: "; cin >> numero;
    // Para evaluar cada caso se utilizan las sentencias condicionales if, else if y else

    // Utilizando el operador lógico && (AND) se evaluara si el número ingresado es positivo y par

    /*Si se cumple una de las dos condiciones se imprime y la otra no, 
    la condición que si se cumple tendrá valor de 1 o True y la que no se cumple tendrá valor de 0 o False
    por lo tanto (1 && 1) = 1, (1 && 0) = 0, (0 && 1) = 0, (0 && 0) = 0, con base en lo anterior se puede determinar si el número es par y positivo
    */

    // Se utiliza el operador % para determinar si el número es par, si el residuo de la división del número entre 2 es 0, el número es par
    // Se evalua si el número es positivo y par
    if (numero > 0 && numero % 2 == 0){
        cout << "El número es par y positivo" << endl;
    }
    // Se utiliza el != para saber si el número es impar, si el residuo de la división del número entre 2 es diferente de 0, el número es impar
    // Se evalua si el número es positivo y no par
    else if (numero > 0 && numero % 2 != 0){
        cout << "El número es positivo pero no es par" << endl;
    } 
    // Se evalua si el número es negativo y par  
    else if(numero < 0 && numero % 2 == 0){
        cout << "El número no es positivo pero si es par" << endl;
    }
    // Se evalua si el número no es par ni positivo
    else{
        cout << "El número no es par ni positivo" << endl;
    }

    return 0;
    
}
