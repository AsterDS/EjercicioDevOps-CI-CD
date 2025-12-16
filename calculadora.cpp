#include <iostream>
#include <limits>
#include <cmath>
#include <string>

using namespace std;

int main() {
    double a = 0.0, b = 0.0;
    char op = 0;
    string command;

    cout << "Calculadora v3" << endl;
    cout << "Operaciones disponibles:" << endl;
    cout << "  Suma, resta, multiplicacion, division" << endl;
    cout << "  Raiz cuadrada: sqrt <numero>" << endl;
    cout << "\nEjemplos:" << endl;
    cout << "  5 + 3" << endl;
    cout << "  sqrt 9" << endl;
    cout << "\nIngresa la operacion: ";

    cin >> command;

    if (command == "sqrt") {
        cin >> a;

        if (cin.fail() || a < 0) {
            cerr << "Error: numero invalido para raiz cuadrada." << endl;
            return 1;
        }

        cout << "Resultado: " << sqrt(a) << endl;
        return 0;
    }

    try {
        a = stod(command);
    } catch (...) {
        cerr << "Error: entrada invalida." << endl;
        return 1;
    }

    cin >> op >> b;

    if (cin.fail()) {
        cerr << "Error: entrada invalida." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }

    switch (op) {
        case '+':
            cout << "Resultado: " << a + b << endl;
            break;

        case '-':
            cout << "Resultado: " << a - b << endl;
            break;

        case '*':
            cout << "Resultado: " << a * b << endl;
            break;

        case '/':
            if (b == 0) {
                cerr << "Error: no se puede dividir entre cero." << endl;
                return 1;
            }
            cout << "Resultado: " << a / b << endl;
            break;

        default:
            cerr << "Error: operador no valido. Usa +, -, *, /" << endl;
            return 1;
    }

    return 0;
}
