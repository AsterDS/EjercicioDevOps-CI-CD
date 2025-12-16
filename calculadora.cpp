#include <iostream>
#include <limits>

using namespace std;

int main() {
    double a = 0.0, b = 0.0;
    char op = 0;

    cout << "Calculadora v2" << endl;
    cout << "Ingresa una operacion (ejemplo: 5 + 3): ";

    cin >> a >> op >> b;

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
