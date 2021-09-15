#include <iostream>
#include "zads.h"

using namespace std;

int sign_x(long double x){
    if (x > 0)
        return 1;
    if (x == 0)
        return 0;
    return -1;
}

void zad_znak_chisla(){
    cout << "--------------------------------\n";
    cout << "начало задания 16\n\n";
    cout << "эта программа выводит знак числа\n";

    long double a;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод числа]\n";
        a = double_type_input();

        cout << "Вы ввели a = " << a << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nвывод задания 17: \n";

    cout << "знак числa = " << sign_x(a) << endl;

    cout << "\nконец задания 17\n";
    cout << "--------------------------------\n\n";
}
