#include <iostream>
#include "zads.h"

using std::cout;
using std::endl;
using std::cin;
const long long MAX_INT = 2147483647;

void zad_sortirovka_bukv(){
    cout << "------------------------------------------------------\n";
    cout << "Task 15 BEGIN\n\n";

    cout << "\'\'\' This program prints sorted array of characters \'\'\'\n";

    int length = 5;
    char * a = new char[length];

    cout << "\nEnter a chain of " << length << " english characters\n";
    cout << "If you type more than " << length << " characters\n"
            "the odd will be deleted!\n";

    int counter = 0;
    char c;

    while (true){
        cin >> c;

        if ('A' <= c and c <= 'Z'){
            a[counter] = (char)(c + 32);
            counter++;
        }
        else if ('a' <= c and c <= 'z'){
            a[counter] = c;
            counter++;
        }
        else if (!((32 <= c and c <= 47) or c == ';' or c == '-')) {
            if (counter == 0) {
                cout << "Enter ENGLISH LETTERS!\n";
                cin.ignore(MAX_INT, '\n');
            }
            else {
                cout << "You typed not an english character!\n"
                        "The odd will be deleted\n";
                cin.ignore(MAX_INT, '\n');
                break;
            }

        }
        if (counter == length)
            break;
    }

    // array sort
    for (int i = 0; i < counter; ++i)
        for (int j = i+1; j < counter; ++j)
            if (a[i] > a[j]){
                char tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }

    cout << "\nTask 15 OUTPUT: \n";

    // array print
    for (int i = 0; i < counter; ++i){
        if (i % 12 == 0)
            cout << endl;
        cout << a[i];
        (i == counter-1) ? cout << "\n" : cout << ", ";
    }

    cout << "\nTask 15 END\n";
    cout << "------------------------------------------------------\n\n";
}
