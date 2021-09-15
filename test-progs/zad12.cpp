#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void zad_ssuda() {

    cout.precision(10);

    cout << "--------------------------------\n";
    cout << "начало задания 12\n\n";
    cout << "эта программа вычисляет ставку исходя из месячной выплаты по займу\n";
    cout << "формула m = (S*r(1 + r)^n)/(12*((1+r)^n -1))\n";

    long double s, m;
    int n;
    bool vvod = true;

    while (vvod) {
        cout << "\n[ввод числа S (рублей)]\n";
        s = double_type_input();

        cout << "\n[ввод числа n (лет)]\n";
        n = int_type_input();

        cout << "\n[ввод числа m (рублей)]\n";
        m = double_type_input();

        if (s <= 0 or n <= 0 or m <= 0){
            cout << "странные у вас цифры...\n";
            cout << "повторите ввод!\n";
            continue;
        }

        cout << "вы ввели S = " << s << "; n = " << n << "; p = " << m << endl;

        if (yes_no_input()) {
            vvod = false;
        }
    }

    long double r, pow_p, answer;
    int p;
    long long m_x10000 = floor(m*10000);

    for (p = 1; p < 100; ++p) {
        r = p / 100.0;
        pow_p = powl(1 + r, n);
        answer = (s * r * pow_p) / (12 * (pow_p - 1));
        // точность 0.01
        answer = (long long)(answer*10000);

        if (answer == m_x10000)
            break;
    }

    if (p == 100){
        cout << "\nпереход на пониженную точность\n";
        for (p = 1; p < 100; ++p) {
            r = p / 100.0;
            pow_p = powl(1 + r, n);
            answer = (s * r * pow_p) / (12 * (pow_p - 1));
            if (abs(m - answer) < 1)
                break;
        }
    }

    if (p == 100) {
        cout << "\nошибка в рассчетах...\n";
        cout << "вероятно p оказалось > 100...\n";
    }
    else {
        cout << "\nвывод задания 12: \n";
        cout << "предупреждение! точность ограниченная\n";
        cout << "процентная ставка = " << p << endl;
    }

    cout << "\nконец задания 12\n";
    cout << "--------------------------------\n\n";
}
