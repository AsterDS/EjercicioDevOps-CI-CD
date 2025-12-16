#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "Calculadora test" << std::endl;
    std::cout << "Ingresa una operacion: ";

    std::cin >> a >> op >> b;

    if (!std::cin) {
        std::cerr << "Entrada invalida." << std::endl;
        return 1;
    }

    switch (op) {
        case '+':
            std::cout << "Resultado: " << (a + b) << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << (a - b) << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << (a * b) << std::endl;
            break;
        case '/':
            if (b == 0) {
                std::cerr << "Error: Division entre cero." << std::endl;
                return 1;
            }
            std::cout << "Resultado: " << (a / b) << std::endl;
            break;
        default:
            std::cerr << "Operador no valido. Usa +, -, * " << std::endl;
            return 1;
    }

    return 0;
}
