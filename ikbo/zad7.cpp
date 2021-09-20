#include <iostream>
#include "zads.h"
#include <cmath>

using std::cout;
using std::endl;
using std::abs;

void zad_razvetvleniye(){
    cout.precision(24);
    cout << "------------------------------------------------------\n";
    cout << "Task 7 BEGIN\n\n";

    cout << "\'\'\' This program prints W value\n";
    cout << "if |x| < 1: W = a * ln|x|;\n"
            "if |x| >= 1: W = sqrt(a-x^2) \'\'\'\n";

    long double x, a;
    while (true){
        cout << "\n[x input]\n";
        x = double_type_input();

        cout << "\n[a input]\n";
        a = double_type_input();

        cout << "x = " << x << "; a = " << a << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTask 7 OUTPUT: \n";

    if (abs(x) >= 1) {
        if (x*x > a)
            cout << "W is undefined\n";
        else
            cout << "W = " << sqrtl(a - x*x) << endl;
    } else {
        if (x != 0)
            cout << "W = " << a * logl(abs(x)) << endl;
        else
            cout << "W is undefined\n";
    }

    cout << "\nTask 7 END\n";
    cout << "------------------------------------------------------\n\n";
}
