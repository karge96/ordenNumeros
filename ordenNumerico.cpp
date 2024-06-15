#include <iostream>
#include <limits> 
#include <string> 
#include <sstream> 

using namespace std;

// Función que lee y valida la entrada de números enteros
int entero() {
    int numero;
    string entrada;
    while (true) {
        cout << "Ingrese un numero entero: ";
        getline(cin, entrada);
        //convertimos a string y verificamos que sea un entero
        stringstream ss(entrada); 
        if (ss >> numero && ss.eof()) { 
            return numero;
        } else {
            cout << "Entrada invalida. Por favor ingrese un numero entero." << endl;
        }
    }
}

int main() {
    int num1, num2, num3;

    // leemos los 3 numeros ingresados
    cout << "Ingrese el primer numero: ";
    num1 = entero();
    cout << "Ingrese el segundo numero: ";
    num2 = entero();
    cout << "Ingrese el tercer numero: ";
    num3 = entero();

    // Comprueba si están en orden ascendente
    if (num1 <= num2 && num2 <= num3) {
        cout << "Los numeros estan en orden ascendente.\n";
    }else if (num1 >= num2 && num2 >= num3) {
        // Comprueba si están en orden descendente
        cout << "Los numeros estan en orden descendente.\n";
    }else {
        // Si no están en orden ni ascendente ni descendente
        cout << "Los numeros no estan en orden numerico.\n";
    }

    return 0;
}