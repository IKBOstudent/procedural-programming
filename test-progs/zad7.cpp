#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void zad_razvetvleniye(){

    cout.precision(12);

    cout << "--------------------------------\n";
    cout << "начало задания 7\n\n";
    cout << "эта программа выводит значение функции w\n";
    cout << "при |x| >= 1: w = a * ln|x|; при |x| < 1: w = sqrt(a-x^2)\n";

    long double x, a;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод числа x]\n";
        x = double_type_input();

        cout << "\n[ввод числа a]\n";
        a = double_type_input();

        cout << "вы ввели x = " << x << "; a = " << a << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nвывод задания 7: \n";

    if (abs(x) >= 1) {
        if (x*x > a)
            cout << "w не определено\n";
        else
            cout << "w = " << sqrtl(a - x*x) << endl;
    } else
        cout << "w = " << a * logl(abs(x)) << endl;

    cout << "\nконец задания 7\n";
    cout << "--------------------------------\n\n";
}

