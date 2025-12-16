#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Calculadora test" << endl;
    cout << "Ingresa una operacion: ";

    cin >> a >> op >> b;

    if (!cin) {
        cerr << "Entrada invalida." << endl;
        return 1;
    }

    switch (op) {
        case '+':
            cout << "Resultado: " << (a + b) << endl;
            break;
        case '-':
            cout << "Resultado: " << (a - b) << endl;
            break;
        case '*':
            cout << "Resultado: " << (a * b) << endl;
            break;
        case '/':
            if (b == 0) {
                cerr << "Error: Division entre cero." << endl;
                return 1;
            }
            cout << "Resultado: " << (a / b) << endl;
            break;
        default:
            cerr << "Operador no valido. Usa +, -, * " << endl;
            return 1;
    }

    return 0;
}
