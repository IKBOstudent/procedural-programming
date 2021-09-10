#include <iostream>
#include <windows.h>

using namespace std;

void zad1_main(){
    cout << "Максим\n";
}

double check_a_input(){
    double a;
    cout << "Введите первое число (разделитель [.]):\n";

    while (!(cin >> a)){
        cin.clear();
        //cin.ignore(100, '\n');
        cout << "Ввод некорректный! попробуйте снова ввести первое число:\n";
    }
    return a;
}

double check_b_input(){
    double b;
    cout << "Введите второе число (разделитель [.]):\n";

    while (!(cin >> b)){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Ввод некорректный! попробуйте снова ввести второе число:\n";
    }
    return b;
}

void zad2_main(){
    double a, b;
    bool division = true;

    a = check_a_input();
    b = check_b_input();

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
}

void zad3_main(){
    // решение уравнения вида: bx + c = 0
    double answer, b, c;
    b = check_a_input();
    c = check_b_input();

    if (!b == 0.0){
        answer = -c/b;
        cout << "x = " << answer << endl;
    } else{
        cout << "нет корней" << endl;
    }
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

//    zad1_main();
//    zad2_main();
    zad3_main();

    return 0;
}
