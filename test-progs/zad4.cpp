#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void zad_yeshyo_uravneniye(){
    cout << "--------------------------------\n";
    cout << "начало задания 4\n\n";
    cout << "эта программа выводит решение уранения вида: ax^2 + bx + c = 0\n";


    // Уравнение вида: ax^2 + bx + c = 0
    long double answer1, answer2, a, b, c;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод коэффициента a]\n";
        a = double_type_input();

        cout << "\n[ввод коэффициента b]\n";
        b = double_type_input();

        cout << "\n[ввод коэффициента c]\n";
        c = double_type_input();

        cout << "Вы ввели a = " << a << "; b = " << b << "; c = " << c << endl;
        cout << "чтобы продолжить введите [y]; чтобы повторить ввод введите [n]" << endl;
        string y_n;
        cin >> y_n;
        while (y_n != "y" and y_n != "n") {
            cout << "ввод некорректный!\n";
            cout << "чтобы продолжить введите [y]; чтобы повторить ввод введите [n]" << endl;
            cin >> y_n;
        }
        if (y_n == "y") {
            vvod = false;
        }
    }

    long double d = b*b - 4*a*c;

    cout << "\nвывод задания 4:\n\n";

    if (a == 0){
        if (b != 0) {
            answer1 = -c / b;
            if (answer1 == 0)
                answer1 = 0;

            cout << "x = " << answer1 << endl;
        } else {
            cout << "x - любое число\n";
        }

    }
    else if (d == 0) {
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
        cout << "x1 = " << answer1 << "x2 = " << answer2 << endl;

    } else {
        cout << "нет корней" << endl;
    }

    cout << "\nконец задания 4\n";
    cout << "--------------------------------\n\n";
}
