#include <iostream>
#include <windows.h>

using namespace std;

void name_output(){
    cout << "Максим\n";
}

double zad2_a_input(){
    double a;
    cout << "Введите первое число:\n";

    while (!(cin >> a)){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Ввод некорректный! попробуйте снова:\n";
    }
    return a;
}

double zad2_b_input(){
    double b;
    cout << "Введите второе число:\n";

    while (!(cin >> b)){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Ввод некорректный! попробуйте снова:\n";
    }
    return b;
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b;
    bool division = true;

    a = zad2_a_input();
    b = zad2_b_input();

    if (b == 0.0){
        cout << "!!! Предупреждение !!!: деление не будет выполнено\n";
        division = false;
    }

    cout << "Сумма: " << a+b << endl;
    cout << "Разность: " << a-b << endl;
    cout << "Произведение: " << a*b << endl;
    if (division){
        cout << "Частное: " << a/b << endl;
    }

    return 0;
}
