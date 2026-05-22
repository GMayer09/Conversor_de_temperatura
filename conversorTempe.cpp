#include <iostream>
using namespace std;

double celsiusToFahren(double celsius) {
    double fahrenheit = 0.0;
    if (celsius >= -273.15) {
        fahrenheit = ((celsius * 9) / 5) + 32;
        std::cout << "Valor em Fahrenheit: " << fahrenheit << endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Celsius >= -273.15!" << std::endl;
    }
    return fahrenheit;
}

double fahrenToCelsius(double fahrenheit) {
    double celsius = 0.0;
    if (fahrenheit >= -459.67) {
        celsius = ((fahrenheit - 32) * 5) / 9;
        std::cout << "Valor em Celsius: " << celsius << std::endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Fahrenheit >= -459.67!" << std::endl;
    }
    return celsius;
}

double kelvinToCelsius(double kelvin) {
    double celsius = 0.0;
    if (kelvin >= 0.0) {
        celsius = kelvin - 273.15;
        std::cout << "Valor em Celsius: " << celsius << std::endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Kelvin >= 0.0!" << std::endl;
    }
    return celsius;
}

double celsiusToKelvin(double celsius) {
    double kelvin = 0.0;
    if (celsius >= -273.15) {
        kelvin = celsius + 273.15;
        std::cout << "Valor em Kelvin: " << kelvin << std::endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Celsius >= -273.15!" << std::endl;
    }
    return kelvin;
}

double farenToKelvin(double fahrenheit) {
    double kelvin = 0.0;
    if (fahrenheit >= -459.67) {
        kelvin = ((fahrenheit - 32) / 1.8) + 273.15;
        std::cout << "Valor em Kelvin: " << kelvin << std::endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Fahrenheit >= -459.67!" << std::endl;
    }
    return kelvin;
}

double kelvinToFahren(double kelvin) {
    double fahrenheit = 0.0;
    if (kelvin >= 0.0) {
        fahrenheit = ((kelvin - 273.15) * 1.8) + 32;
        std::cout << "Valor em Fahrenheit: " << fahrenheit << std::endl;
    }
    else {
        std::cout << "Valor inválido! Digite um valor para Kelvin >= 0.0!" << std::endl;
    }
    return fahrenheit;
}

int main() {
    int condicao = -1;
    std::cout << "---- Bem vindo ao convertor de temperatura! ----|" << std::endl;
    std::cout << "| 1 - De Celsius para Fahrenheit:               |" << std::endl;
    std::cout << "| 2 - De Celsius para Kelvin:                   |" << std::endl;
    std::cout << "| 3 - De Fahrenheit para Celsius:               |" << std::endl;
    std::cout << "| 4 - De Fahrenheit para Kelvin:                |" << std::endl;
    std::cout << "| 5 - De Kelvin para Celsius:                   |" << std::endl;
    std::cout << "| 6 - De Kelvin para Fahrenheit                 |" << std::endl;
    std::cout << "| 0 - Para sair do programa!                    |" << std::endl;
    while (condicao != 0) {
        std::cin >> condicao;

        switch (condicao) {
            case 1:
                double celsius;
                double fahrenheit;
                std::cout << "Digite uma temperatura em celsius para converter para fahrenheit: ";
                std::cin >> celsius;

                fahrenheit = celsiusToFahren(celsius);
                break;

            case 2:
                double celsius2;
                double kelvin;
                std::cout << "Digite uma temperatura em celsius para converter para kelvin: ";
                std::cin >> celsius2;

                kelvin = celsiusToKelvin(celsius2);
                break;

            case 3:
                double fahrenheit2;
                double celsius3;
                std::cout << "Digite uma temperatura em fahrenheit para converter para celsius: ";
                std::cin >> fahrenheit2;
                celsius3 = fahrenToCelsius(fahrenheit2);
                break;

            case 4:
                double fahrenheit3;
                double kelvin2;
                std::cout << "Digite uma temperatura em fahrenheit para converter para kelvin: ";
                std::cin >> fahrenheit3;

                kelvin2 = farenToKelvin(fahrenheit3);
                break;

            case 5:
                double kelvin3;
                double celsius4;
                std::cout << "Digite uma temperatura em kelvin para converter para celsius: ";
                std::cin >> kelvin3;

                celsius4 = kelvinToCelsius(kelvin3);
                break;

            case 6:
                double kelvin4;
                double fahrenheit4;
                std::cout << "Digite uma temperatura em kelvin para converter para fahrenheit: ";
                std::cin >> kelvin4;

                fahrenheit4 = kelvinToFahren(kelvin4);
                break;

            default:
                std::cout << "Opção inválida! Por favor, escolha uma opção válida." << std::endl;
                break;
        }
        std::cout << "Digite outro número para fazer outra conversão: " << std::endl;
    }
}
