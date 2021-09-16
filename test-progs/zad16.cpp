#include <iostream>
#include "zads.h"
#include <fstream>

using namespace std;

void zad_file(){
    cout << "--------------------------------\n";
    cout << "Task 16 BEGIN\n\n";
    cout << "This program prints sum of numbers from "
            "file \"test.txt\"\n";

    string filename("../test-progs/test.txt");

    ofstream fout(filename);
    if (!fout.is_open())
        cout << "Unable to open '" << filename << "'" << endl;
    else {
        long double a;

        cout << "Enter a chain of 10 numbers\n";
        for (int i = 0; i < 10; ++i){
            cout << "\n[number input]\n";
            a = double_type_input();
            fout << a << " ";
        }
    }
    fout.close();

    cout << "\nTask 16 OUTPUT: \n";

    long double summa = 0.0;
    long double number;

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Unable to open '" << filename << "'" << endl;
    else {
        while(fin >> number){
            summa += number;
        }
    }
    fin.close();

    cout << "\nSum = " << summa << endl;

    cout << "\nTask 16 END\n";
    cout << "--------------------------------\n\n";
}
