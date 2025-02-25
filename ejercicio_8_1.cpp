#include <iostream>
using namespace std;

// Se crea una función para calcular la potencia de un número de tipo double dado el número y su exponente entero

double potencia(float a, int b){
    double pot = 1;
    for(int i = 1; i <= b; i++){
        pot = pot * a;
    }
    return pot;
}


int main(){
    /* Escribe un programa que calcule el interés compuesto. con la fórmula A = P(1 + r/n)^(nt)
    Donde:
    A es el monto final
    P es el principal (la cantidad inicial invertida)
    r es la tasa de interés anual (en decimal)
    n es el número de veces que se aplica el interés al año
    t es el número de años
    */

    // Se definen las variables que son decimales en el contexto del problema
    double a, p, r;
    // Se definen las variables que son enteras en el contexto del problema
    int n,t,exponente;
    // Para términos de facilidad se definen como variables algunas operaciones 
    double primera_operacion, interes_compuesto;
    // Se piden los datos al usuario utilizando las funciones Cout y Cin
    cout << "Ingrese el principal: "; cin >> p;
    cout << "Ingrese la tasa de interes anual (en decimal): "; cin >> r;
    cout << "¿Cuantas veces se aplica el interes al año? "; cin >> n;
    cout << "Por cuantos años se aplicó el interes: "; cin >> t;

    // En este apartado se realizará el respectivo cálculo

    // Utilizando los operadores aritméticos se van calculando las operaciones del intéres compuesto 
    // Se utilizan los operadores de suma (+) y división (/) para calcular (1 + r/n)

    primera_operacion = (1 + (r/n));
    /* Se calcula el exponente (que debe ser un entero) utilizando n es el número de veces que se aplica el interés al año
    y la cantidad de años en la que se aplicó el interés
    */
    exponente = n*t;

    // Se calcula el último término (para la potencia se invoca la función "potencia" creada al inicio)
    interes_compuesto = p * potencia(primera_operacion,exponente);
    // Se arroja el interés compuesto calculado
    cout << "El interes compuesto es: " << interes_compuesto << endl;
    return 0;
}
