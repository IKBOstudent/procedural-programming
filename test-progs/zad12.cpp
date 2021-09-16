#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void zad_ssuda() {
    cout.precision(10);
    cout << "--------------------------------\n";
#ifdef RUS
    cout << "начало задания 12\n\n";
    cout << "эта программа вычисляет ставку исходя из месячной выплаты по займу\n";

    long double s, m;
    long long n;
    bool vvod = true;

    while (vvod) {
        cout << "\n[ввод числа S (заем на сумму S рублей)]\n";
        s = double_type_input();

        cout << "\n[ввод числа n (срок n лет)]\n";
        n = int_type_input();

        cout << "\n[ввод числа m (выплата m рублей в месяц)]\n";
        m = double_type_input();

        if (s <= 0 or n <= 0 or m <= 0){
            cout << "странные у вас цифры...\n";
            cout << "повторите ввод!\n";
            continue;
        }

        cout << "S = " << s << "; n = " << n << "; p = " << m << endl;

        if (yes_no_input())
            vvod = false;
    }

    long double r, pow_p, answer, epsilon = 1.0/1000;
    int p;

    while (true) {
        cout << "\nточность = " << epsilon << endl;
        for (p = 1; p < 100; ++p) {
            r = p / 100.0;
            pow_p = powl(1 + r, n);
            answer = (s * r * pow_p) / (12 * (pow_p - 1));

            if (abs(m - answer) < epsilon)
                break;
        }

        if (p == 100)
            epsilon *= 100;
        else
            break;
    }

    cout << "\nвывод задания 12: \n\n";
    cout << "предупреждение! точность ограниченная\n";
    cout << "процентная ставка = " << p << "%" << endl;


    cout << "\nконец задания 12\n";
#else
    cout << "Task 12 BEGIN\n\n";
    cout << "This program prints loan rate "
            "of a monthly-paid loan\n";
    cout << "m = (S*r(1 + r)^n)/(12*((1+r)^n -1))\n";

    long double s, m;
    long long n;
    bool vvod = true;

    while (vvod) {
        cout << "\n[loan sum S input (rubles)]\n";
        s = double_type_input();

        cout << "\n[n input (years)]\n";
        n = int_type_input();

        cout << "\n[monthly fee m input (rubles)]\n";
        m = double_type_input();

        if (s <= 0 or n <= 0 or m <= 0){
            cout << "Invalid parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "S = " << s << "; n = " << n << "; p = " << m << endl;

        if (yes_no_input())
            vvod = false;
    }

    long double r, pow_p, answer, epsilon = 1.0/1000;
    int p;

    while (true) {
        cout << "\nprecision = " << epsilon << endl;
        for (p = 1; p < 100; ++p) {
            r = p / 100.0;
            pow_p = powl(1 + r, n);
            answer = (s * r * pow_p) / (12 * (pow_p - 1));

            if (abs(m - answer) < epsilon)
                break;
        }

        if (p == 100)
            epsilon *= 10;
        else
            break;
    }

    cout << "\nTask 12 OUTPUT: \n\n";
    cout << "WARNING! limited precision\n";
    cout << "Loan rate = " << p << "%" << endl;


    cout << "\nTask 12 END\n";
#endif
    cout << "--------------------------------\n\n";
}
