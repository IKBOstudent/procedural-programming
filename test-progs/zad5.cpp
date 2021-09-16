#include <iostream>
#include "zads.h"

using namespace std;

bool input(){
#ifdef RUS
    cout << "введите [y] - да ; "
            "[n] - нет\n";

    string y_n;
    getline(cin, y_n);

    while (y_n != "y" and y_n != "n") {
        cout << "ввод некорректный!\n";
        cout << "введите [y] - да ; "
                "[n] - нет\n";

        getline(cin, y_n);
    }
#else
    cout << "Enter [y] - yes ; "
            "[n] - no\n";

    string y_n;
    getline(cin, y_n);

    while (y_n != "y" and y_n != "n") {
        cout << "Invalid input!\n";
        cout << "Enter [y] - yes ; "
                "[n] - no\n";

        getline(cin, y_n);
    }
#endif
    return y_n == "y";
}

void zad_lampa_so_shtorkoy(){
    cout << "--------------------------------\n";
#ifdef RUS
    cout << "начало задания 5\n\n";

    cout << "эта программа определяет "
            "светло или темно в команате\n";

    cout << "\nлампа включена?\n";
    if (input())
        cout << "в комнате светло\n";
    else {
        cout << "шторы раздвинуты?\n";
        if (!input())
            cout << "в комнате темно\n";
        else {
            cout << "на улице день?\n";
            if (input())
                cout << "в комнате светло\n";
            else
                cout << "в комнате темно\n";
        }
    }

    cout << "\nконец задния 5\n";
#else
    cout << "Task 5 BEGIN\n\n";

    cout << "This program can find out "
            "whether the room is dark or bright\n";

    string answer_bright = "\nThe room is BRIGHT\n";
    string answer_dark = "\nThe room is DARK\n";

    cout << "\nIs lantern ON?\n";
    if (input())
        cout << answer_bright;
    else {
        cout << "Are curtains OPEN?\n";
        if (!input())
            cout << answer_dark;
        else {
            cout << "Is it DAY outside?\n";
            if (input())
                cout << answer_bright;
            else
                cout << answer_dark;
        }
    }
    cout << "\nTask 5 END\n";
#endif

    cout << "--------------------------------\n\n";
}
