

#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    int firstNumber;
    int secondNumber;

    cout << "Введите первое число:\n";
    cin >> firstNumber;
    cout << "Введите второе число:\n";
    cin >> secondNumber;
    cout << "-----Проверяем-----\n";
    if (firstNumber > secondNumber) {
        cout << "Наименьшее число: " << secondNumber << endl;

    }
    else if (secondNumber > firstNumber) {
        cout << "Наименьшее число: " << firstNumber << endl;
    }
    else {
        cout << "Числа равны";
    }
}

