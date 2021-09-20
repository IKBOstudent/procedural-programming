#include <iostream>
#include "zads.h"
#include <cmath>

using std::cout;
using std::endl;

void zad_konus() {
    cout.precision(24);
    cout << "------------------------------------------------------\n";
    cout << "Task 6 BEGIN\n\n";

    cout << "\'\'\' This program prints volume and surface area of a cone \'\'\'\n";

    long double r1, r2, h;
    while (true) {
        cout << "\n[cone's base radius input]\n";
        r1 = double_type_input();

        cout << "\n[section radius input]\n";
        r2 = double_type_input();

        cout << "\n[cone height input]\n";
        h = double_type_input();

        if (r1 <= 0 or r2 <= 0 or h <= 0) {
            cout << "Invalid geometric object parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        if (r1 == r2) {
            cout << "These are cilinder parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "r1 = " << r1 << "; r2 = " << r2 << "; h = " << h << endl;
        if (yes_no_input())
            break;
    }

    // v = 1/3*pi*h*(r1^2 + r1*r2 + r2^2)
    // l = sqrt((r1 - r2)^2 + h^2)
    // s = pi * (r1^2 + (r1 + r2)*l + r2^2)

    long double v, s, l;
    long double pi = M_PI;

    v = (1.0 / 3) * pi * h * (r1 * r1 + r1 * r2 + r2 * r2);

    l = sqrtl((r1 - r2) * (r1 - r2) + h * h);  // side length
    s = pi * (r1 * r1 + (r1 + r2) * l + r2 * r2);

    cout << "\nTask 6 OUTPUT: \n\n";

    cout << "Cone volume = " << v << endl;
    cout << "Surface area = " << s << endl;

    cout << "\nTask 6 END\n";
    cout << "------------------------------------------------------\n\n";
}
