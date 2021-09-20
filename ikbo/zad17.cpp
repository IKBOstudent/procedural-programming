#include <iostream>
#include "zads.h"

using std::cout;
using std::endl;

int sign_x(long double x){
    if (x > 0)
        return 1;
    if (x == 0)
        return 0;
    return -1;
}

void zad_znak_chisla(){
    cout << "------------------------------------------------------\n";
    cout << "Task 17 BEGIN\n\n";

    cout << "\'\'\' This program prints the sign of a number \'\'\'\n";

    long double a;
    while (true){
        cout << "\n[number A input]\n";
        a = double_type_input();

        cout << "A = " << a << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTask 17 OUTPUT: \n";

    cout << "Sign of A = " << sign_x(a) << endl;

    cout << "\nTask 17 END\n";
    cout << "------------------------------------------------------\n\n";
}
