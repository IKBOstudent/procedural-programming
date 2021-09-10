#include <iostream>
#include <windows.h>

using namespace std;


// задание 1
void zad1(){
    cout << "начало задания 1\n";

    cout << "Вывод задания 1: " << "Максим\n";

    cout << "конец задания 1\n\n";
}

// вспомогательная функция ввода с проверкой
double check_number_input(){
    double num;
    cout << "Введите число (разделитель: [.]):\n";

    while (!(cin >> num)){
        cin.clear();
        cin.ignore(256, '\n');
        cout << "Ввод некорректный! Введите число заново:\n";
    }
    return num;
}

// задание 2
void zad2(){
    cout << "начало задания 2\n";

    double a, b;
    bool division = true;

    cout << "[ввод первого числа]\n";
    a = check_number_input();

    cout << "[ввод второго числа]\n";
    b = check_number_input();

    if (b == 0.0){
        cout << "Предупредждение: !Деление на ноль!: деление не будет выполнено...\n";
        division = false;
    }
    cout << "Вывод задания 2:\n";

    cout << "Сумма: " << a+b << endl;
    cout << "Разность: " << a-b << endl;
    cout << "Произведение: " << a*b << endl;
    if (division){
        cout << "Частное: " << a/b << endl;
    }

    cout << "конец задания 2\n\n";
}

// задание 3
void zad3(){
    cout << "начало задания 3\n";

    // Уравнение вида: bx + c = 0
    double answer, b, c;

    cout << "[ввод первого числа]\n";
    b = check_number_input();

    cout << "[ввод второго числа]\n";
    c = check_number_input();

    cout << "Вывод задания 3:\n";

    if (b != 0.0){
        answer = -c/b;
        cout << "x = " << answer << endl;
    } else{
        cout << "нет корней" << endl;
    }

    cout << "конец задания 3\n\n";
}

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    cout << "Запуск системы тестирования программ...\n";

    zad1();
    system("pause");

    zad2();
    system("pause");

    zad3();

    cout << "Завершение работы системы тестирования...\n";

    return 0;
}
