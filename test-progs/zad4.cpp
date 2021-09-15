#include <iostream>
#include <cmath>
#include "zads.h"

using namespace std;

void zad_yeshyo_uravneniye(){

    cout.precision(12);

    cout << "--------------------------------\n";
    cout << "начало задания 4\n\n";
    cout << "эта программа выводит решение уранения вида: ax^2 + bx + c = 0\n";


    // Уравнение вида: ax^2 + bx + c = 0
    long double answer1, answer2, a, b, c;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод коэффициента a]\n";
        a = double_type_input();

        cout << "\n[ввод коэффициента b]\n";
        b = double_type_input();

        cout << "\n[ввод коэффициента c]\n";
        c = double_type_input();

        cout << "вы ввели a = " << a << "; b = " << b << "; c = " << c << endl;

        if (yes_no_input())
            vvod = false;
    }

    long double d = b*b - 4*a*c;

    cout << "\nвывод задания 4:\n\n";

    if (a == 0){
        if (b != 0) {
            answer1 = -c / b;
            if (answer1 == 0)
                answer1 = 0;

            cout << "x = " << answer1 << endl;
        } else
            cout << "x - любое число\n";

    }
    else if (d == 0) {
        answer1 = -b / (2 * a);
        if (answer1 == 0)
            answer1 = 0;
        cout << "x = " << answer1 << endl;

    } else if (d > 0) {
        answer1 = (-b + sqrtl(d)) / (2 * a);
        if (answer1 == 0)
            answer1 = 0;
        answer2 = (-b - sqrtl(d)) / (2 * a);
        if (answer2 == 0)
            answer2 = 0;
        cout << "x1 = " << answer1 << "x2 = " << answer2 << endl;

    } else
        cout << "нет корней" << endl;

    cout << "\nконец задания 4\n";
    cout << "--------------------------------\n\n";
}
