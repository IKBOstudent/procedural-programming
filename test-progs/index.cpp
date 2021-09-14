#include <iostream>
#include "zad1.h"
#include "zad2.h"
#include "zad3.h"
#include "zad4.h"
#include "zad5.h"
#include "double_type_input.h"
// для windows
#include <windows.h>

using namespace std;

int main(){
    // для CLion
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // для CodeBlocks
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);

    cout << "Запуск системы тестирования программ...\n";

    // домашнее задание 1

    zad_imya();
    zad_ariphmetica();
    zad_uravneniye();
    zad_yeshyo_uravneniye();
    zad_lampa_so_shtorkoy();

    cout << "Завершение работы системы тестирования...\n";

    return 0;
}
