#include "HEADER_zads.h"
#include <cmath>

void zad_zayem(){
    cout.precision(10);
    cout << "------------------------------------------------------\n";
    cout << "Task 11 BEGIN\n\n";

    cout << "\'\'\' This program print monthly loan fee\n";
    cout << "m = (S*r(1 + r)^n)/(12*((1+r)^n -1)) \'\'\'\n";

    long double s, p;
    long long n;
    while (true) {
        cout << "\n[S input (rubles)]\n";
        number_validator(s);

        cout << "\n[n input (years)]\n";
        number_validator(n);

        cout << "\n[p input (percents)]\n";
        number_validator(p);

        if (p >= 1000){
            cout << "Invalid percentage!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        if (s <= 0 or n <= 0 or p <= 0){
            cout << "Invalid parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "S = " << s << "; n = " << n << "; p = " << p << endl;
        if (yes_no_input())
            break;
    }

    long double r, pow_p, answer;
    r = p / 100;
    pow_p = powl(1 + r, n);
    answer = (s * r * pow_p) / (12 * (pow_p - 1));

    cout << "\nTask 11 OUTPUT: \n";

    cout << "Monthly loan fee = " << answer << endl;

    cout << "\nTask 11 END\n";
    cout << "------------------------------------------------------\n\n";
}
