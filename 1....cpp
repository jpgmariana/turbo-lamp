
#include <iostream>

int main() {
    int num1, num2, num3;

    // Solicitar al usuario que ingrese los tres enteros
    std::cout << "Ingrese el primer entero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo entero: ";
    std::cin >> num2;

    std::cout << "Ingrese el tercer entero: ";
    std::cin >> num3;

    // Verificar si est�n en orden ascendente o descendente
    if (num1 < num2 && num2 < num3) {
        std::cout << "Los enteros est�n en orden ascendente.\n";
    } else if (num1 > num2 && num2 > num3) {
        std::cout << "Los enteros est�n en orden descendente.\n";
    } else {
        std::cout << "Los enteros no est�n en orden numerico.\n";
    }

    return 0;
}

