#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void zad_konus() {

    cout.precision(12);

    cout << "--------------------------------\n";
    cout << "начало задания 6\n\n";
    cout << "эта программа выводит объем и площадь поверхности конуса\n";

    long double pi = M_PI;

    long double r1, r2, h;
    bool vvod = true;

    while (vvod) {
        cout << "\n[ввод радиуса основания конуса]\n";
        r1 = double_type_input();

        cout << "\n[ввод радиуса сечения]\n";
        r2 = double_type_input();

        cout << "\n[ввод высоты усеченного конуса]\n";
        h = double_type_input();

        if (r1 <= 0 or r2 <= 0 or h <= 0) {
            cout << "вы ввели недопустимые параметры геометрического объекта\n";
            cout << "повторите ввод параметров!\n";
            continue;
        }

        cout << "вы ввели r1 = " << r1 << "; r2 = " << r2 << "; h = " << h << endl;

        if (yes_no_input())
            vvod = false;
    }

    // v = 1/3*pi*h*(r1^2 + r1*r2 + r2^2)
    // l = sqrt((r1 - r2)^2 + h^2)
    // s = pi * (r1^2 + (r1 + r2)*l + r2^2)\

    long double v, s, l;
    v = (1.0 / 3) * pi * h * (r1 * r1 + r1 * r2 + r2 * r2);
    l = sqrtl((r1 - r2) * (r1 - r2) + h * h);
    s = pi * (r1 * r1 + (r1 + r2) * l + r2 * r2);

    cout << "\nвывод задания 6: \n";

    cout << "объем конуса = " << v << endl;
    cout << "полная площадь поверхности = " << s << endl;

    cout << "\nконец задания 6\n";
    cout << "--------------------------------\n\n";
}
