#include <iostream>
#include <windows.h>

using namespace std;

void zad1(){
    cout << "Максим\n";
}

double check_a_input(){
    double a;
    cout << "Введите первое число (разделитель: [.]):\n";

    while (!(cin >> a)){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Ввод некорректный! Попробуйте снова ввести первое число:\n";
    }
    return a;
}

double check_b_input(){
    double b;
    cout << "Введите второе число (разделитель: [.]):\n";

    while (!(cin >> b)){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Ввод некорректный! Попробуйте снова ввести второе число:\n";
    }
    return b;
}

void zad2(){
    double a, b;
    bool division = true;

    a = check_a_input();
    b = check_b_input();

    if (b == 0.0){
        cout << "Предупредждение: !Деление на ноль!: деление не будет выполнено...\n";
        division = false;
    }

    cout << "Сумма: " << a+b << endl;
    cout << "Разность: " << a-b << endl;
    cout << "Произведение: " << a*b << endl;
    if (division){
        cout << "Частное: " << a/b << endl;
    }
}

void zad3(){
    // Уравнение вида: bx + c = 0
    double answer, b, c;
    b = check_a_input();
    c = check_b_input();

    if (b != 0.0){
        answer = -c/b;
        cout << "x = " << answer << endl;
    } else{
        cout << "нет корней" << endl;
    }
}

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    zad1();
    zad2();
    zad3();

    return 0;
}
