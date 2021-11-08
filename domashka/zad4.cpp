#include "HEADER_zads.h"
#include <cmath>

void zad_yeshyo_uravneniye(){
    cout.precision(24);
    cout << "------------------------------------------------------\n";
    cout << "Task 4 BEGIN\n\n";

    cout << "\'\'\' This program prints the roots of "
            "ax^2 + bx + c = 0 equation \'\'\'\n";

    long double answer1, answer2, a, b, c;
    while (true){
        cout << "\n[coefficient a input]\n";
        number_validator(a);

        cout << "\n[coefficient b input]\n";
        number_validator(b);

        cout << "\n[coefficient c input]\n";
        number_validator(c);

        cout << "a = " << a << "; b = " << b << "; c = " << c << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTask 4 OUTPUT: \n\n";

    long double d = b*b - 4*a*c;

    if (a == 0){
        if (b != 0) {
            answer1 = -c / b;
            if (answer1 == 0)
                answer1 = 0;

            cout << "x = " << answer1 << endl;
        } else
            cout << "x - any number" << endl;

    } else if (d == 0) {
        answer1 = -b / (2 * a);
        if (answer1 == 0)
            answer1 = 0;
        cout << "x = " << answer1 << endl;

    } else if (d > 0) {
        answer1 = (-b + sqrtl(d)) / (2 * a);
        if (answer1 == 0)
            answer1 = 0;
        answer2 = (-b - sqrtl(d)) / (2 * a);
        if (answer2 == 0)
            answer2 = 0;
        cout << "x1 = " << answer1 << "\nx2 = " << answer2 << endl;

    } else
        cout << "no roots" << endl;

    cout << "\nTask 4 END\n";
    cout << "------------------------------------------------------\n\n";
}
