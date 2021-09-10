#include <iostream>
#include "zads.h"

using namespace std;

void zad3(){
    cout << "----------------\n";
    cout << "начало задания 3\n\n";

    // Уравнение вида: bx + c = 0
    long double answer, b, c;

    cout << "[ввод первого числа]\n";
    b = double_type_input() * (-1);

    cout << "[ввод второго числа]\n";
    c = double_type_input();

    cout << "\nвывод задания 3:\n\n";

    if (b != 0.0){
        answer = c / b;
        cout << "x = " << answer << endl;
    } else{
        cout << "нет корней" << endl;
    }

    cout << "\nконец задания 3\n";
    cout << "----------------\n\n";
}