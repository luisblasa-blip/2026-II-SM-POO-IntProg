#include <iostream>
#include <string>
using namespace std;

// TEMPLATE: SUMA
template <typename T>
T suma(T a, T b) {
    return a + b;
}

// TEMPLATE: RESTA
template <typename T>
T resta(T a, T b) {
    return a - b;
}

// TEMPLATE: MULTIPLICACION
template <typename T>
T multiplicacion(T a, T b) {
    return a * b;
}

// TEMPLATE: DIVISION
template <typename T>
T division(T a, T b) {
    return a / b;
}

// TEMPLATE: MODULO
template <typename T>
T modulo(T a, T b) {
    return a % b;
}

// TEMPLATE: NEGATIVO
template <typename T>
T neg(T a) {
    return -a;
}


void DemoFuncionesAritmeticas() {

    cout << "\n===== DEMOSTRACION DE FUNCIONES ARITMETICAS =====\n";

    // Variables enteras
    int a = -5;
    int b = -2;

    cout << "\n--- OPERACIONES CON ENTEROS ---\n";

    cout << "Suma: " << suma(a, b) << endl;
    cout << "Resta: " << resta(a, b) << endl;
    cout << "Multiplicacion: " << multiplicacion(a, b) << endl;
    cout << "Division: " << division(a, b) << endl;
    cout << "Modulo: " << modulo(a, b) << endl;
    cout << "Negativo: " << neg(a) << endl;

    // Variables decimales
    double x = 10.5;
    double y = 2.5;

    cout << "\n--- OPERACIONES CON DECIMALES ---\n";

    cout << "Suma: " << suma(x, y) << endl;
    cout << "Resta: " << resta(x, y) << endl;
    cout << "Multiplicacion: " << multiplicacion(x, y) << endl;
    cout << "Division: " << division(x, y) << endl;
    cout << "Negativo: " << neg(x) << endl;

    // Variables string
    string str1 = "Hola, ";
    string str2 = "Mundo!";

    cout << "\n--- SUMA DE CADENAS ---\n";

    cout << "Suma: " << suma(str1, str2) << endl;
}

int main() {

    DemoFuncionesAritmeticas();

    return 0;
}