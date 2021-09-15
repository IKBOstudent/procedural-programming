#include <iostream>
#include "zads.h"
#include <fstream>

using namespace std;

void zad_file(){
    cout << "--------------------------------\n";
    cout << "начало задания 16\n\n";
    cout << "эта программа выводит сумму чисел введенных вами в файл\n";

    string filename("../test-progs/test.txt");

    ofstream fout(filename);
    if (!fout.is_open())
        cout << "Невозможно открыть файл '" << filename << "'" << endl;
    else {
        long double a;

        cout << "введите 10 чисел\n";
        for (int i = 0; i < 10; ++i){
            cout << "\n[ввод числа]\n";
            a = double_type_input();
            fout << a << " ";
        }
    }
    fout.close();

    cout << "\nвывод задания 16: \n";

    long double summa = 0;
    long double number;

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Невозможно открыть файл '" << filename << "'" << endl;
    else {
        while(fin >> number){
            summa += number;
        }
    }
    fin.close();

    cout << "сумма чисел = " << summa << endl;

    cout << "\nконец задания 16\n";
    cout << "--------------------------------\n\n";
}
