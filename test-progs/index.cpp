#include <iostream>
#include "zads.h"  // zad modules header file and language mods

// To use russian symbols on MS Windows define WINDOWS_SYS
//#define WINDOWS_SYS

#ifdef WINDOWS_SYS
#include <windows.h>
#endif

using namespace std;

int main(){
#ifdef WINDOWS_SYS
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
#endif

#ifdef RUS
    cout << "Language: \"rus\"\n";
    cout << "Запуск системы тестирования программ...\n";
#else
    cout << "Language: \"en\"\n";
    cout << "Launching test system...\n";
#endif

    // dom_zad1

    //zad_imya();  // 1
    //zad_ariphmetica();  // 2
    //zad_uravneniye();  // 3
    //zad_yeshyo_uravneniye();  // 4
    //zad_lampa_so_shtorkoy();  // 5


    // dom_zad2

    //zad_konus();  // 6
    //zad_razvetvleniye();  // 7
    //zad_funcziya();  // 8
    //zad_poryadok();  // 9
    //zad_tabulyaziya();  // 10


    // dom_zad3

    //zad_zayem();  // 11
    //zad_ssuda();  // 12
    //zad_copy_file();  // 13
    //zad_filtr();  // 14
    //zad_sortirovka_bukv();  // 15

    // dom_zad4

    //zad_file();  // 16
    //zad_znak_chisla();  // 17
    //zad_geometricheskiye_figurs();  // 18

#ifdef RUS
    cout << "Завершение работы системы тестирования...\n";
#else
    cout << "Quitting test system ...\n";
#endif

    return 0;
}
