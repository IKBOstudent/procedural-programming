#include <iostream>
#include "zads.h"

using namespace std;

void zad_ariphmetica(){

    cout.precision(12);

    cout << "--------------------------------\n";
    cout << "начало задания 2\n\n";
    cout << "эта программа выводит сумму, разность,\n";
    cout << "произведение и частное введенных чисел\n";

    long double a, b;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод первого числа]\n";
        a = double_type_input();

        cout << "\n[ввод второго числа]\n";
        b = double_type_input();

        cout << "Вы ввели a = " << a << "; b = " << b << endl;

        if (yes_no_input()) {
            vvod = false;
        }
    }

    cout << "\nвывод задания 2:\n\n";

    long double sum, raz, prod;
    sum = a + b;
    raz = a - b;
    prod = a * b;
    if (prod == 0){
        prod = 0;
    }

    cout << "сумма: " << sum << endl;
    cout << "разность: " << raz << endl;
    cout << "произведение: " << prod << endl;

    if (b != 0){
        long double div = a / b;
        cout << "частное: " << div << endl;
    } else {
        cout << "деление выполнить нельзя\n";
    }

    cout << "\nконец задания 2\n";
    cout << "--------------------------------\n\n";
}
