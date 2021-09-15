#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void zad_funcziya(){

    cout.precision(12);

    cout << "--------------------------------\n";
    cout << "начало задания 8\n\n";
    cout << "эта программа выводит значение функции z\n";
    cout << "z = ln(b - y) * sqrt(b - x)\n";

    long double x, y, b;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод числа x]\n";
        x = double_type_input();

        cout << "\n[ввод числа y]\n";
        y = double_type_input();

        cout << "\n[ввод числа b]\n";
        b = double_type_input();

        cout << "вы ввели x = " << x << "; y = " << y << "; b = " << b << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nвывод задания 8: \n";

    if (x > b or y >= b)
        cout << "z не определено\n";
    else
        cout << "z = " << logl(b - y) * sqrtl(b - x)  << endl;

    cout << "конец задания 8\n";
    cout << "--------------------------------\n\n";
}
