#include <iostream>
#include "zads.h"

using namespace std;

void zad_uravneniye(){

    cout.precision(12);

    cout << "--------------------------------\n";
    cout << "начало задания 3\n\n";
    cout << "эта программа выводит решение уранения вида: bx + c = 0\n";

    // Уравнение вида: bx + c = 0
    long double answer, b, c;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод коэффициента b]\n";
        b = double_type_input();

        cout << "\n[ввод коэффициента c]\n";
        c = double_type_input();

        cout << "Вы ввели b = " << b << "; c = " << c << endl;

        if (yes_no_input()) {
            vvod = false;
        }
    }

    cout << "\nвывод задания 3:\n\n";

    if (b != 0.0){
        answer = - c / b;
        if (answer == 0)
            answer = 0;

        cout << "x = " << answer << endl;
    } else{
        cout << "нет корней" << endl;
    }

    cout << "\nконец задания 3\n";
    cout << "--------------------------------\n\n";
}
