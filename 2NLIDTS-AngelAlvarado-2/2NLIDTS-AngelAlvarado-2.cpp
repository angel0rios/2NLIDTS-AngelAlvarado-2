//Encabezado
#include <iostream>
int casa = 0;
using namespace std;
//funcion secundaria
void funcion_secundaria(int numero) {
    cout << "El numero recibido es:" << endl;
    cout << numero << endl;
}
int funcion_secundaria2(int numero2) {
    int resultado = 0;
    cout << "el numero recibido es:" << endl;
    cout << numero2 << endl;
    resultado = numero2 + numero2;
    return resultado;
}
//funcion principal
int main()
{
    int valor_recibido;
    int variable = 0;
    cout << "Actividad 02-Programa estructurado basico" << endl;
    cout << "Ingrese el valor a imprimir" << endl;
    cin >> variable;
    funcion_secundaria(variable);
    valor_recibido = funcion_secundaria2(variable);
    cout << "El resultado de la multiplicacion es: " << endl;
    cout << valor_recibido << endl;
    return 0;

}
