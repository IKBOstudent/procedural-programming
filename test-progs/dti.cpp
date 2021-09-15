#include <iostream>
#include "zads.h"
#include <limits>

using namespace std;

long double double_type_input(){
    long double num;
    cout << "введите число (разделитель: [.]):\n";

    while (!(cin >> num)){
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(), '\n');
        cout << "ввод некорректный! Введите число заново:\n";
    }

    cin.clear();
    cin.ignore(std::numeric_limits<int>::max(), '\n');

    return num;
}

int int_type_input(){
    int num;
    cout << "введите число:\n";

    while (!(cin >> num)){
        cin.clear();
        cin.ignore(std::numeric_limits<int>::max(), '\n');
        cout << "ввод некорректный! Введите число заново:\n";
    }

    cin.clear();
    cin.ignore(std::numeric_limits<int>::max(), '\n');

    return num;
}

bool yes_no_input(){
    cout << "чтобы продолжить введите [y]; чтобы повторить ввод введите [n]" << endl;
    string y_n;
    getline(cin, y_n);

    while (y_n != "y" and y_n != "n") {
        cout << "ввод некорректный!\n";
        cout << "чтобы продолжить введите [y]; чтобы повторить ввод введите [n]" << endl;
        getline(cin, y_n);
    }

    return y_n == "y";
}
