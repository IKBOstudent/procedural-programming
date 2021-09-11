#include <iostream>
#include "zads.h"

using namespace std;

void zad_uravneniye(){
    cout << "--------------------------------\n";
    cout << "начало задания 3\n\n";
    cout << "эта программа выводит решение уранения вида: bx + c = 0\n";

    // Уравнение вида: bx + c = 0
    long double answer, b, c;
    bool vvod = true;

    while (vvod){
        cout << "[ввод коэффициента b]\n";
        b = double_type_input();

        cout << "[ввод коэффициента c]\n";
        c = double_type_input();

        cout << "Вы ввели b = " << b << "; c = " << c << endl;
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

    cout << "\nвывод задания 3:\n\n";

    if (b != 0.0){
        answer = - c / b;
        if (answer == 0)
            answer = 0;

        cout << "x = " << answer << endl;
    } else{
        cout << "нет корней" << endl;
    }

    cout << "\nконец задания 3\n";
    cout << "--------------------------------\n\n";
}
