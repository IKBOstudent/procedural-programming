#include <iostream>
#include "zads.h"
#include <fstream>

using namespace std;

void zad_copy_file(){
    cout << "--------------------------------\n";
    cout << "начало задания 13\n\n";
    cout << "эта программа выводит содержимое файла на экран\n";

    string filename("../test-progs/test.txt");

    cout << "\nвывод задания 13: \n";

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Невозможно открыть файл '" << filename << "'" << endl;
    else {
        cout << "\n[начало файла]\n";
        while (!fin.eof()){
            string s;
            getline(fin, s);
            cout << s;
            if (!fin.eof())
                cout << endl;
            else
                cout << "\n[конец файла]\n";
        }
    }
    fin.close();

    cout << "\nконец задания 13\n";
    cout << "--------------------------------\n\n";
}
