#include <iostream>
#include "zads.h"

using namespace std;

void zad_tabulyaziya(){
    cout.precision(12);
    cout << "--------------------------------\n";

#ifdef RUS
    cout << "начало задания 10\n\n";
    cout << "эта программа для функции y = (x^2 - 2x + 2)/(x - 1)\n"
            "выводит значения y для x от -4 до 4 \n";

    cout << "\nвывод задания 10: \n";

    long double x = -4;
    while (x <= 4) {
        if (x == 1)
            cout << "x = 1; y не определен\n";
        else {
            long double y = (x*x - 2*x + 2)/(x - 1);
            cout << "x = " << x << ": y = " << y << endl;
        }

        x += 0.5;
    }

    cout << "\nконец задания 10\n";
#else
    cout << "Task 10 BEGIN\n\n";
    cout << "This program prints y for integer x from [-4, 4] \n"
            "where y = (x^2 - 2x + 2)/(x - 1)\n";

    cout << "\nTask 10 OUTPUT: \n";

    long double x = -4;
    while (x <= 4) {
        if (x == 1)
            cout << "x = 1; y is undefined\n";
        else {
            long double y = (x*x - 2*x + 2)/(x - 1);
            cout << "x = " << x << ": y = " << y << endl;
        }
        x += 0.5;
    }

    cout << "\nTask 10 END\n";
#endif

    cout << "--------------------------------\n\n";
}
