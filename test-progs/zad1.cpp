#include <iostream>
#include "zads.h"

using namespace std;

void zad_imya(){
    cout << "--------------------------------\n";

#ifdef RUS
    cout << "начало задания 1\n\n";

    cout << "эта программа выводит мое имя на экран\n";
    cout << "вывод задания 1: " << "Максим\n\n";

    cout << "конец задания 1\n";
#else
    cout << "Task 1 BEGIN\n\n";

    cout << "This program displays my name\n";
    cout << "\nTask 1 OUTPUT: " << "Maxim\n\n";

    cout << "Task 1 END\n";
#endif

    cout << "--------------------------------\n\n";
}
