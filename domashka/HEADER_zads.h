#ifndef ZADS_H
#define ZADS_H

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const long long MAX_INT = 2147483647;

// custom sorting functions
void bubble_sort(char*, int);

template <typename T>
void shaker_sort(T*, int);

void heap_sort();
void quick_sort();


// validation functions
template <typename T>
void number_validator(T& number){
    cout << "Enter your number\n";

    char a;
    bool bad;

    while (true){
        cin >> number;
        cin.clear();

        cin.get(a);

        bad = false;
        while(a != '\n'){
            if (a != ' ') {
                cout << "Invalid input! "
                        "Enter your number again\n";
                bad = true;
                cin.ignore(MAX_INT, '\n');
                break;
            }
            cin.get(a);
        }
        if (!bad)
            break;
    }
}

bool yes_no_input();

// domashka

// dom_zad1
void zad_imya(const char*);  // 1
void zad_ariphmetica();  // 2
void zad_uravneniye();  // 3
void zad_yeshyo_uravneniye();  // 4
void zad_lampa_so_shtorkoy();  // 5

// dom_zad2
void zad_konus();  // 6
void zad_razvetvleniye();  // 7
void zad_funcziya();  // 8
void zad_poryadok();  // 9
void zad_tabulyatsiya();  // 10

// dom_zad3
void zad_zayem();  // 11
void zad_ssuda();  // 12
void zad_copy_file();  // 13
void zad_filtr();  // 14
void zad_sortirovka_bukv();  // 15

// dom_zad4
void zad_file();  // 16
void zad_znak_chisla();  // 17
void zad_geometricheskiye_figurs();  // 18
void zad_bylaya_slava();  // 19
void zad_sinusoida();  // 20
void zad_automatnyi_rasposnovatel();  // 21
void zad_generator_psevdosluchayinyh_chisel();  // 22
void zad_umnozheniye_matrits();  // 23
void zad_systems_schislenya();  // 24

// dom_zad5
void zad_algorritm_evklida();  // 25
void zad_resheto_eratosphena();  // 26
void zad_obrabotka_tekstovyh_files_n8();  // 27
void zad_obrabotka_tekstovyh_files_n32();  // 28
void zad_ryady_n7();  // 29
void zad_ryady_n2();  // 30
void zad_fily_n11();  // 31


// shariki
void zad_shariki();  // 32


// contr
void n1();
void n2();
void n3();
void n4();
void n5();

#endif  // ZADS_H
