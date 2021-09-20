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

    if (n <= 1)
        n = 1;
    else {
        n = ceill(n);
        cout << "ceiled n = " << n << endl;
    }

    for (auto i = (long long)n; i < n + 10; ++i) {
        cout << i;
        (i == n + 9) ? cout << "\n" : cout << ", ";
    }

    cout << "\n\nTask 9 END\n";
    cout << "------------------------------------------------------\n\n";
}
