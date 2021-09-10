#include <iostream>
#include <windows.h>
#include "zads.h"

int main(){
    using namespace std;

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
