#include <iostream>
#include "zads.h"

using std::cout;
using std::endl;

void zad_tabulyatsiya(){
    cout.precision(24);
    cout << "------------------------------------------------------\n";
    cout << "Task 10 BEGIN\n\n";

    cout << "\'\'\' This program prints y for integer x from [-4, 4] \n"
            "where y = (x^2 - 2x + 2)/(x - 1) \'\'\'\n";

    cout << "\nTask 10 OUTPUT: \n";

    float y,  x = -4;
    while (x <= 4) {
        if (x == 1)
            cout << "x=1"<< "\t" << ": y is undefined\n";
        else {
            y = (x*x - 2*x + 2)/(x - 1);
            cout << "x=" << x << "\t" <<": y=" << y << endl;
        }
        x += 0.5f;
    }

    cout << "\nTask 10 END\n";
    cout << "------------------------------------------------------\n\n";
}
