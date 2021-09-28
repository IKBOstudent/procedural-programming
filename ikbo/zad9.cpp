#include <iostream>
#include "zads.h"
#include <cmath>

using std::cout;
using std::endl;

void zad_poryadok(){
    cout << "------------------------------------------------------\n";
    cout << "Task 9 BEGIN\n\n";

    cout << "\'\'\' This program prints "
            "10 numbers starting with N \'\'\'\n";

    long double n;
    while (true) {
        cout << "\n[N input]\n";
        n = double_type_input();

        cout << "N = " << n << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTask 9 OUTPUT: \n";

    long long start;
    if (n <= 1)
        start = 1;
    else {
        start = (long long)ceill(n);
    }

    for (long long i = start; i < start + 10; ++i) {
        cout << i;
        (i == start + 9) ? cout << "\n" : cout << ", ";
    }

    cout << "\n\nTask 9 END\n";
    cout << "------------------------------------------------------\n\n";
}

