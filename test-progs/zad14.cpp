#include <iostream>
#include "zads.h"
#include <fstream>

using namespace std;

void zad_filtr(){
    cout << "--------------------------------\n";
    cout << "начало задания 14\n\n";
    cout << "эта программа выводит содержимое файла на экран\n";

    string filename("../test-progs/test.txt");

    cout << "\nвывод задания 14: \n";

    ifstream fin(filename);
    if (!fin.is_open()) {
        cout << "Невозможно открыть файл '"
             << filename << "'" << endl;
    } else {
        cout << "\n[начало файла]\n";
        while (!fin.eof()){
            string s;
            getline(fin, s);

            auto len = s.length();

            for (int i = 0; i < len; ++i){
                if (isdigit(s[i]))
                    cout << s[i] << "; ";
            }

            if (fin.eof())
                cout << "\n[конец файла]\n";
        }
    }

    fin.close();

    cout << "\nконец задания 14\n";
    cout << "--------------------------------\n\n";
}
