#include <iostream>
#include "zads.h"

using namespace std;

void zad2(){
    cout << "----------------\n";
    cout << "начало задания 2\n\n";

    long double a, b;
    bool division = true;

    cout << "[ввод первого числа]\n";
    a = double_type_input();

    cout << "[ввод второго числа]\n";
    b = double_type_input();

    if (b == 0.0){
        cout << "\nПредупредждение: !Деление на ноль!: деление не будет выполнено...\n\n";
        division = false;
    }
    cout << "вывод задания 2:\n\n";

    long double sum, raz, prod;
    sum = a + b;
    raz = a - b;
    prod = a * b;

    cout << "сумма: " << sum << endl;
    cout << "разность: " << raz << endl;
    cout << "произведение: " << prod << endl;

    if (division){
        long double div = a / b;
        cout << "частное: " << div << endl;
    }

    cout << "\nконец задания 2\n";
    cout << "----------------\n\n";
}
