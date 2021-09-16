#include <iostream>
#include "zads.h"
#include <cmath>

using namespace std;

void rect_s(){
    bool vvod = true;
    long double a, b;

    while (vvod) {
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
            vvod = false;
    }

    cout << "\nRectangle area = " << a * b << endl;
}

void tri_s(){
    bool vvod = true;
    long double a, h;

    while (vvod) {
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
            vvod = false;
    }

    cout << "\nTriangle area = " << 1.0/2 * a * h << endl;
}

void circ_s(){
    bool vvod = true;
    long double r;
    long double pi = M_PI;

    while (vvod) {
        cout << "\n[r (circle radius) input]\n";
        r = double_type_input();

        if (r <= 0) {
            cout << "Invalid geometric object parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "r = " << r << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nCircle area = " << pi * r * r << endl;
}

void zad_geometricheskiye_figurs() {

    cout.precision(12);

    cout << "--------------------------------\n";
    cout << "Task 18 BEGIN\n\n";
    cout << "This program prints the area of a figure\n";

    int fig;

    cout << "Figure input\n";
    cout << "[r] rectangle | [t] triangle | [c] circle\n";
    string input;
    getline(cin, input);

    while (input != "r" and input != "t" and input != "c") {
        cout << "Invalid input!\n";
        cout << "[r] rectangle | [t] triangle | [c] circle\n";
        getline(cin, input);
    }

    if (input == "r")
        fig = 1;
    else if (input == "t")
        fig = 2;
    else
        fig = 3;

    cout << "\nTask 18 OUTPUT: \n";

    if (fig == 1)
        rect_s();
    else if (fig == 2)
        tri_s();
    else
        circ_s();

    cout << "\nTask 18 END\n";
    cout << "--------------------------------\n\n";
}
