#include <iostream>
#include "zads.h"

using namespace std;

void zad_uravneniye(){
    cout.precision(12);
    cout << "--------------------------------\n";

#ifdef RUS
    cout << "начало задания 3\n\n";

    cout << "эта программа выводит решение уранения "
            "вида: bx + c = 0\n";

    long double answer, b, c;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод коэффициента b]\n";
        b = double_type_input();

        cout << "\n[ввод коэффициента c]\n";
        c = double_type_input();

        cout << "b = " << b << "; c = " << c << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nвывод задания 3:\n\n";

    if (b != 0.0){
        answer = - c / b;
        if (answer == 0)
            answer = 0;

        cout << "x = " << answer << endl;
    } else
        cout << "нет корней" << endl;

    cout << "\nконец задния 3\n";
#else
    cout << "Task 3 BEGIN\n\n";

    cout << "This program prints the root of "
            "bx + c = 0 equation\n";

    long double answer, b, c;
    bool vvod = true;

    while (vvod){
        cout << "\n[coefficient b input]\n";
        b = double_type_input();

        cout << "\n[coefficient c input]\n";
        c = double_type_input();

        cout << "b = " << b << "; c = " << c << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nTask 3 OUTPUT: \n\n";

    if (b != 0.0){
        answer = - c / b;
        if (answer == 0)
            answer = 0;

        cout << "x = " << answer << endl;
    } else
        cout << "no roots" << endl;

    cout << "\nTask 3 END\n";
#endif

    cout << "--------------------------------\n\n";
}
