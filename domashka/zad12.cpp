#include "HEADER_zads.h"
#include <cmath>

using std::abs;

long double m_calc(long double S, long double r, int n) {
    return (S * r * powl((1 + r), n)) / (12 * (powl((1 + r), n) - 1));
}

void zad_ssuda() {
    cout << "------------------------------------------------------\n";
    cout << "Task 12 BEGIN\n\n";

    cout << "\'\'\' This program prints loan rate "
            "of a monthly-paid loan\n";
    cout << "m = (S*r(1 + r)^n)/(12*((1+r)^n -1)) \'\'\'\n";

    long double S, m;
    int n;
    while (true) {
        cout << "\n[loan sum \"S\" input (rubles)]\n";
        number_validator(S);

        cout << "\n[\"n\" input (years)]\n";
        number_validator(n);

        cout << "\n[monthly fee \"m\" input (rubles)]\n";
        number_validator(m);

        if (S <= 0 or n <= 0 or m <= 0){
            cout << "Invalid parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "S = " << S << "; n = " << n << "; p = " << m << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTask 12 OUTPUT: \n\n";

    if (n * 12 * m < S)
        cout << "Invalid\np < 0%\n";
    else {
        long double r = 0.001, best = r;

        long double m_1 = m_calc(S, r, n);
        long double minim = abs(m_1 - m);

        while (true) {
            m_1 = m_calc(S, r, n);
            long double raznost = abs(m_1 - m);

            if (raznost < minim){
                minim = raznost;
                best = r;
            }
            r += 0.001;

            if (r >= 1.001) {
                if (abs(m_calc(S, r, n) - m) < minim)
                    cout << "Invalid\np > 100%\n";
                else
                    cout << "Answer: p ~ " << best * 100 << "%" << endl;
                break;
            }
        }
    }
    cout << "\nTask 12 END\n";
    cout << "------------------------------------------------------\n\n";
}