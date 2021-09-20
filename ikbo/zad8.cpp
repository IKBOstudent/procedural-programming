#include <iostream>
#include "zads.h"
#include <cmath>

using std::cout;
using std::endl;

void zad_funcziya(){
    cout.precision(24);
    cout << "------------------------------------------------------\n";
    cout << "Task 8 BEGIN\n\n";

    cout << "\'\'\' This program print function z() value\n";
    cout << "z = ln(b - y) * sqrt(b - x) \'\'\'\n";

    long double x, y, b;
    while (true){
        cout << "\n[x input]\n";
        x = double_type_input();

        cout << "\n[y input]\n";
        y = double_type_input();

        cout << "\n[b input]\n";
        b = double_type_input();

        cout << "x = " << x << "; y = " << y << "; b = " << b << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTaks 8 OUTPUT: \n";

    if (x > b or y >= b)
        cout << "\nz is undefined\n";
    else
        cout << "\nz = " << logl(b - y) * sqrtl(b - x)  << endl;

    cout << "\nTask 8 END\n";
    cout << "------------------------------------------------------\n\n";
}
