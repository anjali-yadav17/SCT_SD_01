#include <iostream>
using namespace std;

float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

float celsiusToKelvin(float c) {
    return c + 273.15;
}

float kelvinToCelsius(float k) {
    return k - 273.15;
}

float fahrenheitToKelvin(float f) {
    return (f - 32) * 5.0 / 9.0 + 273.15;
}

float kelvinToFahrenheit(float k) {
    return (k - 273.15) * 9.0 / 5.0 + 32;
}

int main() {
    int choice;
    float value;

    cout << " Temperature Converter " << endl;

    while (true) {
        cout << "\nChoose an option:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice (0-6): ";
        cin >> choice;

        if (choice == 0) {
            cout << " Exiting program. Thank you!" << endl;
            break;
        }

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice. Please enter a number between 0 and 6." << endl;
            continue;
        }

        cout << "Enter temperature value: ";
        cin >> value;

        switch (choice) {
            case 1:
                cout << "Result: " << celsiusToFahrenheit(value) << " °F" << endl;
                break;
            case 2:
                cout << "Result: " << fahrenheitToCelsius(value) << " °C" << endl;
                break;
            case 3:
                cout << "Result: " << celsiusToKelvin(value) << " K" << endl;
                break;
            case 4:
                cout << "Result: " << kelvinToCelsius(value) << " °C" << endl;
                break;
            case 5:
                cout << "Result: " << fahrenheitToKelvin(value) << " K" << endl;
                break;
            case 6:
                cout << "Result: " << kelvinToFahrenheit(value) << " °F" << endl;
                break;
        }
    }

    return 0;
}
