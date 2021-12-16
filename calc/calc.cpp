# include <iostream>
#include "windows.h"
using namespace std;


int main() {
    char op;
    float num1, num2;

    cout << "Ievadiet operatoru: +, -, *, /: ";
    cin >> op;

    cout << "Ievadiet divus skaitļus: ";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        Sleep(7000);
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        Sleep(7000);
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        Sleep(7000);
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        Sleep(7000);
        break;

    default:
        //Ja operators ir cits neka +, -, * or /, parada kļūdas teikumu.
        cout << "Kļūda! Nepareizs operators!";
        Sleep(7000);
        break;
    }

    return 0;
}
