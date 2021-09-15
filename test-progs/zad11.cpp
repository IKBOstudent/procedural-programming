#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void zad_zayem() {

    cout.precision(10);

    cout << "--------------------------------\n";
    cout << "начало задания 11\n\n";
    cout << "эта программа вычисляет месячную выплату по займу\n";
    cout << "формула m = (S*r(1 + r)^n)/(12*((1+r)^n -1))\n";

    long double s, p;
    int n;
    bool vvod = true;

    while (vvod) {
        cout << "\n[ввод числа S (рублей)]\n";
        s = double_type_input();

        cout << "\n[ввод числа n (лет)]\n";
        n = int_type_input();

        cout << "\n[ввод числа p (процентов)]\n";
        p = double_type_input();

        if (s <= 0 or n <= 0 or p <= 0){
            cout << "странные у вас цифры...\n";
            cout << "повторите ввод!\n";
            continue;
        }

        cout << "вы ввели S = " << s << "; n = " << n << "; p = " << p << endl;

        if (yes_no_input())
            vvod = false;
    }

    long double r, pow_p, answer;
    r = p / 100;
    pow_p = powl(1 + r, n);
    answer = (s * r * pow_p) / (12 * (pow_p - 1));

    cout << "\nвывод задания 11: \n";

    printf("месячная выплата = %.2Lf рублей\n", answer); // точность 2 знака
    //cout << "месячная выплата =" << answer << "рублей" << endl;  // точность 10 знаков

    cout << "\nконец задания 11\n";
    cout << "--------------------------------\n\n";
}
