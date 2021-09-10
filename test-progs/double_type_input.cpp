#include <iostream>
#include "zads.h"

using namespace std;

long double double_type_input(){
    long double num;
    cout << "введите число (разделитель: [.]):\n";


    while (!(cin >> num)){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "ввод некорректный! Введите число заново:\n";
    }

    cin.clear();
    cin.ignore(INT_MAX, '\n');

    return num;
}
