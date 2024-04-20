#include <iostream>
#include <cmath>
using namespace std;

void lengthConverter() {
    bool running = true;
    while (running) {
        int choice;
        double value;
        cout << "Length Converter\n";
        cout << "1: Kilometer to Meter\n";
        cout << "2: Meter to Kilometer\n";
        cout << "3: Centimeter to Meter\n";
        cout << "4: Meter to Centimeter\n";
        cout << "5: Millimeter to Meter\n";
        cout << "6: Meter to Millimeter\n";
        cout << "7: Inch to Centimeter\n";
        cout << "8: Centimeter to Inch\n";
        cout << "9:exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter the value to convert: ";
        cin >> value;

        switch (choice) {
            case 1:
                cout << value << " kilometers is equal to " << value * 1000 << " meters.\n";
                break;
            case 2:
                cout << value << " meters is equal to " << value / 1000 << " kilometers.\n";
                break;
            case 3:
                cout << value << " centimeters is equal to " << value / 100 << " meters.\n";
                break;
            case 4:
                cout << value << " meters is equal to " << value * 100 << " centimeters.\n";
                break;
            case 5:
                cout << value << " millimeters is equal to " << value / 1000 << " meters.\n";
                break;
            case 6:
                cout << value << " meters is equal to " << value * 1000 << " millimeters.\n";
                break;
            case 7:
                cout << value << " inches is equal to " << value * 2.54 << " centimeters.\n";
                break;
            case 8:
                cout << value << " centimeters is equal to " << value / 2.54 << " inches.\n";
                break;
            case 9:
                running = false;
                break;
            default:
                cout << "Invalid choice.\n";
                running = false; // Exit the loop on invalid choice
        }
    }
}

void weightConverter() {
    bool running = true;
    while (running) {
        int choice;
        double value;
        cout << "Weight Converter\n";
        cout << "1: Kilogram to Gram\n";
        cout << "2: Gram to Kilogram\n";
        cout << "3: Kilogram to Pound\n";
        cout << "4: Pound to Kilogram\n";
        cout << "5: Gram to Milligram\n";
        cout << "6: Milligram to Gram\n";
        cout << "7: Ounce to Gram\n";
        cout << "8: Gram to Ounce\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter the value to convert: ";
        cin >> value;

        switch (choice) {
            case 1:
                cout << value << " kilograms is equal to " << value * 1000 << " grams.\n";
                break;
            case 2:
                cout << value << " grams is equal to " << value / 1000 << " kilograms.\n";
                break;
            case 3:
                cout << value << " kilograms is equal to " << value * 2.20462 << " pounds.\n";
                break;
            case 4:
                cout << value << " pounds is equal to " << value * 0.453592 << " kilograms.\n";
                break;
            case 5:
                cout << value << " grams is equal to " << value * 1000 << " milligrams.\n";
                break;
            case 6:
                cout << value << " milligrams is equal to " << value / 1000 << " grams.\n";
                break;
            case 7:
                cout << value << " ounces is equal to " << value * 28.3495 << " grams.\n";
                break;
            case 8:
                cout << value << " grams is equal to " << value / 28.3495 << " ounces.\n";
                break;
            default:
                cout << "Invalid choice.\n";
                running = false; // Exit the loop on invalid choice
        }
    }
}

void temperatureConverter() {
    bool running = true;
    while (running) {
        int choice;
        double value;
        cout << "Temperature Converter\n";
        cout << "1: Celsius to Fahrenheit\n";
        cout << "2: Fahrenheit to Celsius\n";
        cout << "3: Celsius to Kelvin\n";
        cout << "4: Kelvin to Celsius\n";
        cout << "5: Fahrenheit to Kelvin\n";
        cout << "6: Kelvin to Fahrenheit\n";
        cout << "7: Rankine to Celsius\n";
        cout << "8: Celsius to Rankine\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter the value to convert: ";
        cin >> value;

        switch (choice) {
            case 1:
                cout << value << " degrees Celsius is equal to " << (value * 9 / 5) + 32 << " degrees Fahrenheit.\n";
                break;
            case 2:
                cout << value << " degrees Fahrenheit is equal to " << (value - 32) * 5 / 9 << " degrees Celsius.\n";
                break;
            case 3:
                cout << value << " degrees Celsius is equal to " << value + 273.15 << " Kelvin.\n";
                break;
            case 4:
                cout << value << " Kelvin is equal to " << value - 273.15 << " degrees Celsius.\n";
                break;
            case 5:
                cout << value << " degrees Fahrenheit is equal to " << (value + 459.67) * 5 / 9 << " Kelvin.\n";
                break;
            case 6:
                cout << value << " Kelvin is equal to " << (value * 9 / 5) - 459.67 << " degrees Fahrenheit.\n";
                break;
            case 7:
                cout << value << " degrees Rankine is equal to " << (value - 491.67) * 5 / 9 << " degrees Celsius.\n";
                break;
            case 8:
                cout << value << " degrees Celsius is equal to " << (value + 273.15) * 9 / 5 << " degrees Rankine.\n";
                break;
            default:
                cout << "Invalid choice.\n";
                running = false; // Exit the loop on invalid choice
        }
    }
}

void speedConverter() {
    bool running = true;
    while (running) {
        int choice;
        double value;
        cout << "Speed Converter\n";
        cout << "1: Kilometers per Hour to Meters per Second\n";
        cout << "2: Meters per Second to Kilometers per Hour\n";
        cout << "3: Miles per Hour to Meters per Second\n";
        cout << "4: Meters per Second to Miles per Hour\n";
        cout << "5: Knots to Meters per Second\n";
        cout << "6: Meters per Second to Knots\n";
        cout << "7: Feet per Second to Meters per Second\n";
        cout << "8: Meters per Second to Feet per Second\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter the value to convert: ";
        cin >> value;

        switch (choice) {
            case 1:
                cout << value << " kilometers per hour is equal to " << value * 1000 / 3600 << " meters per second.\n";
                break;
            case 2:
                cout << value << " meters per second is equal to " << value * 3600 / 1000 << " kilometers per hour.\n";
                break;
            case 3:
                cout << value << " miles per hour is equal to " << value * 1609.34 / 3600 << " meters per second.\n";
                break;
            case 4:
                cout << value << " meters per second is equal to " << value * 3600 / 1609.34 << " miles per hour.\n";
                break;
            case 5:
                cout << value << " knots is equal to " << value * 1852 / 3600 << " meters per second.\n";
                break;
            case 6:
                cout << value << " meters per second is equal to " << value * 3600 / 1852 << " knots.\n";
                break;
            case 7:
                cout << value << " feet per second is equal to " << value * 0.3048 << " meters per second.\n";
                break;
            case 8:
                cout << value << " meters per second is equal to " << value / 0.3048 << " feet per second.\n";
                break;
            default:
                cout << "Invalid choice.\n";
                running = false; // Exit the loop on invalid choice
        }
    }
}

void basicMath() {
    bool running = true;
    while (running) {
        char op;
        double num1, num2;
        cout << "Basic Mathematics\n";
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Division by zero error!\n";
                break;
            default:
                cout << "Invalid operator.\n";
                running = false; // Exit the loop on invalid operator
        }
    }
}

void volumeConverter() {
    bool running = true;
    while (running) {
        int choice;
        double value;
        cout << "Volume Converter\n";
        cout << "1: Cubic Meter to Liter\n";
        cout << "2: Liter to Cubic Meter\n";
        // Add more volume conversion options...
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter the value to convert: ";
        cin >> value;

        switch (choice) {
            case 1:
                cout << value << " cubic meters is equal to " << value * 1000 << " liters.\n";
                break;
            case 2:
                cout << value << " liters is equal to " << value / 1000 << " cubic meters.\n";
                break;
                // Add more cases for other volume conversions...
            default:
                cout << "Invalid choice.\n";
                running = false; // Exit the loop on invalid choice
        }
    }
}

void areaConverter() {
    bool running = true;
    while (running) {
        int choice;
        double value;
        cout << "Area Converter\n";
        cout << "1: Square Meter to Square Foot\n";
        cout << "2: Square Foot to Square Meter\n";
        // Add more area conversion options...
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "Enter the value to convert: ";
        cin >> value;

        switch (choice) {
            case 1:
                cout << value << " square meters is equal to " << value * 10.7639 << " square feet.\n";
                break;
            case 2:
                cout << value << " square feet is equal to " << value / 10.7639 << " square meters.\n";
                break;
                // Add more cases for other area conversions...
            default:
                cout << "Invalid choice.\n";
                running = false; // Exit the loop on invalid choice
        }
    }
}

int main() {
    bool running = true;
    while (running) {
        int user_input;
        cout << "----Unit Converter----\n";
        cout << "1: Length\n";
        cout << "2: Weight\n";
        cout << "3: Temperature\n";
        cout << "4: Speed\n";
        cout << "5: Basic Mathematics (+, -, *, /)\n";
        cout << "6: Volume\n";
        cout << "7: Area\n";
        cout << "8: Exit\n";
        cout << "Enter your choice: ";
        cin >> user_input;

        switch (user_input) {
            case 1:
                lengthConverter();
                break;
            case 2:
                weightConverter();
                break;
            case 3:
                temperatureConverter();
                break;
            case 4:
                speedConverter();
                break;
            case 5:
                basicMath();
                break;
            case 6:
                volumeConverter();
                break;
            case 7:
                areaConverter();
                break;
            case 8:
                running = false;
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid input. Please try again.\n";
        }
    }

    return 0;
}
