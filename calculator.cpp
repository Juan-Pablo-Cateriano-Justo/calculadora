#include <iostream>
using namespace std;

double calcular(double a, double b, char op) {
    switch (op) {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            if (b != 0)
                return a / b;
            else {
                cout << "Error: division entre cero\n";
                return 0;
            }

        default:
            cout << "Operacion invalida\n";
            return 0;
    }
}

int main() {
    double a, b;
    char op;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese la operacion (+ - * /): ";
    cin >> op;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    double resultado = calcular(a, b, op);

    cout << "Resultado: " << resultado << endl;

    return 0;
}
