#include <iostream>
using namespace std;

float celsiusToFahren(float celsius) {
    float fahrenheit;
    if (celsius >= -273.15) {
        fahrenheit = ((celsius * 9) / 5) + 32;
        std::cout << "Valor em Fahrenheit: " << fahrenheit << endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Celsius >= -273.15!" << endl;
    }
    return fahrenheit;
}

float fahrenToCelsius(float fahrenheit) {
    float celsius;
    if (fahrenheit >= -459.67) {
        celsius = ((fahrenheit * 5) / 9) - 32;
        std::cout << "Valor em Celsius: " << celsius << endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Fahrenheit >= -459.67!" << endl;
    }
    return celsius;
}

float kelvinToCelsius(float kelvin) {
    float celsius;
    if (kelvin >= 0.0) {
        celsius = kelvin - 273.15;
        std::cout << "Valor em Celsius: " << celsius << endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Kelvin >= 0.0!" << endl;
    }
    return celsius;
}

float celsiusToKelvin(float celsius) {
    float kelvin;
    if (celsius >= -273.15) {
        kelvin = celsius + 273.15;
        std::cout << "Valor em Kelvin: " << kelvin << endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Celsius >= -273.15!" << endl;
    }
    return kelvin;
}

float farenToKelvin(float fahrenheit) {
    float kelvin;
    if (fahrenheit >= -459.67) {
        kelvin = ((fahrenheit - 32) / 1.8) + 273.15;
        std::cout << "Valor em Kelvin: " << kelvin << endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Fahrenheit >= -459.67!" << endl;
    }
    return fahrenheit;
}

float kelvinToFahren(float kelvin) {
    float fahrenheit;
    if (kelvin >= 0.0) {
        fahrenheit = ((kelvin + 32) * 1.8) - 273.15;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Kelvin >= 0.0!" << endl;
    }
    return kelvin;
}

int main() {
    int condicao = -1;
    while (condicao != 0) {
        std::cout << "---- Bem vindo ao convertor de temperatura! ----|" << endl;
        std::cout << "| 1 - De Celsius para Fahrenheit:               |" << endl;
        std::cout << "| 2 - De Celsius para Kelvin:                   |" << endl;
        std::cout << "| 3 - De Fahrenheit para Celsius:               |" << endl;
        std::cout << "| 4 - De Fahrenheit para Kelvin:                |" << endl;
        std::cout << "| 5 - De Kelvin para Celsius:                   |" << endl;
        std::cout << "| 6 - De Kelvin para Fahrenheit                 |" << endl;
        std::cout << "| 0 - Para sair do programa!                    |" << endl;

        std::cin >> condicao;

        switch (condicao) {
            case 1:
                float celsius;
                float fahrenheit;
                std::cout << "Digite uma temperatura em celsius para converter para fahrenheit: ";
                std::cin >> celsius;

                fahrenheit = celsiusToFahren(celsius);
                break;
            case 0:
                break;
        }
        std::cout << "Digite outro número para fazer outra conversão: ";
        std::cin >> condicao;
    }
}
