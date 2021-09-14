#include <iostream>
#include "zads.h"

using namespace std;

long double double_type_input(){
    long double num;
    cout << "введите число (разделитель: [.]):\n";

    while (!(cin >> num)){
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "ввод некорректный! Введите число заново:\n";
    }

    cin.clear();
    cin.ignore(32767, '\n');

    return num;
}

int int_type_input(){
    int num;
    cout << "введите число:\n";

    while (!(cin >> num)){
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "ввод некорректный! Введите число заново:\n";
    }

    cin.clear();
    cin.ignore(32767, '\n');

    return num;
}
