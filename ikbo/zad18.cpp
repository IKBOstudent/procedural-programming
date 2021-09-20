#include <iostream>
#include "zads.h"
#include <cmath>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void rect_s(){
    long double a, b;
    while (true) {
        cout << "\n[a (rectangle side) input]\n";
        a = double_type_input();

        cout << "\n[b (rectangle side) input]\n";
        b = double_type_input();

        if (a <= 0 or b <= 0) {
            cout << "Invalid geometric object parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "a = " << a << "; b = " << b << endl;
        if (yes_no_input())
            break;
    }
    cout << "\nRectangle area = " << a * b << endl;
}

void tri_s(){
    long double a, h;
    while (true) {
        cout << "\n[a (triangle base) input]\n";
        a = double_type_input();

        cout << "\n[h (triangle height) input]\n";
        h = double_type_input();

        if (a <= 0 or h <= 0) {
            cout << "Invalid geometric object parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "a = " << a << "; h = " << h << endl;
        if (yes_no_input())
            break;
    }
    cout << "\nTriangle area = " << 1.0/2 * a * h << endl;
}

void circ_s(){
    long double r;
    long double pi = M_PI;
    while (true) {
        cout << "\n[r (circle radius) input]\n";
        r = double_type_input();

        if (r <= 0) {
            cout << "Invalid geometric object parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "r = " << r << endl;

        if (yes_no_input())
            break;
    }
    cout << "\nCircle area = " << pi * r * r << endl;
}

void zad_geometricheskiye_figurs() {
    cout.precision(24);
    cout << "------------------------------------------------------\n";
    cout << "Task 18 BEGIN\n\n";

    cout << "\'\'\' This program prints the area of a figure \'\'\'\n";
    cout << "\nFigure input\n";
    cout << "[r] rectangle | [t] triangle | [c] circle\n";

    string input;
    getline(cin, input);
    while (input != "r" and input != "t" and input != "c") {
        cout << "Invalid input!\n";
        cout << "[r] rectangle | [t] triangle | [c] circle\n";
        getline(cin, input);
    }

    cout << "\nTask 18 OUTPUT: \n";

    if (input == "r")
        rect_s();
    else if (input == "t")
        tri_s();
    else
        circ_s();

    cout << "\nTask 18 END\n";
    cout << "------------------------------------------------------\n\n";
}
