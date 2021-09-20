#include <iostream>
#include "zads.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool input(){
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

    return y_n == "y";
}

void zad_lampa_so_shtorkoy(){
    cout << "------------------------------------------------------\n";
    cout << "Task 5 BEGIN\n\n";

    cout << "\'\'\' This program can find out "
            "whether the room is dark or bright \'\'\'\n";

    string bright = "\nThe room is BRIGHT\n";
    string dark = "\nThe room is DARK\n";

    cout << "\nIs lantern ON?\n";
    if (input())
        cout << bright;
    else {
        cout << "Are curtains OPEN?\n";
        if (!input())
            cout << dark;
        else {
            cout << "Is it DAY outside?\n";
            if (input())
                cout << bright;
            else
                cout << dark;
        }
    }

    cout << "\nTask 5 END\n";
    cout << "------------------------------------------------------\n\n";
}
