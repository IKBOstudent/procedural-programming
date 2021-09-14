#include <iostream>

using namespace std;

string y_n_input(){
    string y_n;

    cout << "введите [y] если да; [n] если нет" << endl;
    cin >> y_n;

    while (y_n != "y" and y_n != "n") {
        cout << "ввод некорректный!\n";
        cout << "введите [y] если да; [n] если нет" << endl;
        cin >> y_n;
    }

    return y_n;
}

void zad_lampa_so_shtorkoy(){
    cout << "--------------------------------\n";
    cout << "начало задания 5\n\n";
    cout << "эта программа определяет светло ли в команате\n";

    string answer;

    // светло ли в комнате
    cout << "лампа включена?\n";
    answer = y_n_input();
    if (answer == "y")
        cout << "в комнате светло\n";
    else {
        cout << "шторы раздвинуты?\n";
        answer = y_n_input();
        if (answer == "n")
            cout << "в комнате темно\n";
        else {
            cout << "на улице день?\n";
            answer = y_n_input();
            if (answer == "y")
                cout << "в комнате светло\n";
            else
                cout << "в комнате темно\n";
        }
    }


    cout << "\nконец задания 5\n";
    cout << "--------------------------------\n\n";
}
