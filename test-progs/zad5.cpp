#include <iostream>
#include "zads.h"

using namespace std;

void zad_lampa_so_shtorkoy(){
    cout << "--------------------------------\n";
    cout << "начало задания 5\n\n";
    cout << "эта программа определяет светло ли в команате\n";

    string answer;

    // светло ли в комнате
    cout << "лампа включена?\n";
    if (yes_no_input())
        cout << "в комнате светло\n";
    else {
        cout << "шторы раздвинуты?\n";
        if (!yes_no_input())
            cout << "в комнате темно\n";
        else {
            cout << "на улице день?\n";
            if (yes_no_input())
                cout << "в комнате светло\n";
            else
                cout << "в комнате темно\n";
        }
    }

    cout << "\nконец задания 5\n";
    cout << "--------------------------------\n\n";
}
