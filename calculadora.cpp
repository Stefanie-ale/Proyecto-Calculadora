// Creación de calculadora 
#include <iostream>
#include <cmath>
using namespace std;

double sumar(double a, double b) {
    return a + b;
}

double restar(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: División por cero no permitida." << endl;
        return 0;
    }
    return a / b;
}

double logaritmoNatural(double a) {
    if (a <= 0) {
        cout << "Error: Logaritmo natural de número no positivo no permitido." << endl;
        return 0;
    }
    return log(a);
}

int main() {
    //"CALCULADORA GRUPO 1"
    double num1, num2;
    char operacion;
    cout << "Ingrese dos números: ";
    cin >> num1 >> num2;
    cout << "Ingrese operación (+, -, *, /, n): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case '-':
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case '*':
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case '/':
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        case 'n':
            cout << "Resultado: " << logaritmoNatural(num1) << endl;
            break;
        default:
            cout << "Operación no válida." << endl;
    }
    return 0;
}