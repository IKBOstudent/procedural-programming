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
    cout << "Task 17 BEGIN\n\n";
    cout << "This program prints the sign of a number\n";

    long double a;
    bool vvod = true;

    while (vvod){
        cout << "\n[number a input]\n";
        a = double_type_input();

        cout << "a = " << a << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nTask 17 OUTPUT: \n";

    cout << "sign of a = " << sign_x(a) << endl;

    cout << "\nTask 17 END\n";
    cout << "--------------------------------\n\n";
}
