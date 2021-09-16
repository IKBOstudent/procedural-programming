#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void zad_zayem() {
    cout.precision(10);
    cout << "--------------------------------\n";
#ifdef RUS
    cout << "начало задания 11\n\n";
    cout << "эта программа вычисляет месячную выплату по займу\n";
    cout << "формула m = (S*r(1 + r)^n)/(12*((1+r)^n -1))\n";

    long double s, p;
    long long n;
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
#else
    cout << "Task 11 BEGIN\n\n";
    cout << "This program print monthly loan fee\n";
    cout << "m = (S*r(1 + r)^n)/(12*((1+r)^n -1))\n";

    long double s, p;
    long long n;
    bool vvod = true;

    while (vvod) {
        cout << "\n[S input (rubles)]\n";
        s = double_type_input();

        cout << "\n[n input (years)]\n";
        n = int_type_input();

        cout << "\n[p input (percents)]\n";
        p = double_type_input();

        if (s <= 0 or n <= 0 or p <= 0){
            cout << "Invalid parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "S = " << s << "; n = " << n << "; p = " << p << endl;

        if (yes_no_input())
            vvod = false;
    }

    long double r, pow_p, answer;
    r = p / 100;
    pow_p = powl(1 + r, n);
    answer = (s * r * pow_p) / (12 * (pow_p - 1));

    cout << "\nTask 11 OUTPUT: \n";

    printf("monthly loan fee = %.2Lf rubles\n", answer);

    cout << "\nTask 11 END\n";
#endif
    cout << "--------------------------------\n\n";
}
