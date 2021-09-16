#include <iostream>
#include "zads.h"
#include <fstream>

using namespace std;

void zad_filtr(){
    cout << "--------------------------------\n";
#ifdef RUS
    cout << "начало задания 14\n\n";
    cout << "эта выводит только цифры из "
            "файла\n";

    string filename("../test-progs/test.txt");

    cout << "\nвывод задания 14: \n";

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Невозможно открыть файл '" << filename << "'" << endl;
    else {
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
#else
    cout << "Task 14 BEGIN\n\n";
    cout << "This program prints only digits from "
            "file \"test.txt\"\n";

    string filename("../test-progs/test.txt");

    cout << "\nTask 14 BEGIN: \n";

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Unable to open '" << filename << "'" << endl;
    else {
        cout << "\n[FILE BEGIN]\n";
        while (!fin.eof()){
            string s;
            getline(fin, s);

            auto len = s.length();

            for (int i = 0; i < len; ++i){
                if (isdigit(s[i]))
                    cout << s[i] << "; ";
            }

            if (fin.eof())
                cout << "\n[FILE END]\n";
        }
    }
    fin.close();

    cout << "\nTask 14 END\n";
#endif
    cout << "--------------------------------\n\n";
}
