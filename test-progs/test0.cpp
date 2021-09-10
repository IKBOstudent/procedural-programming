#include <iostream>
#include <windows.h>

using namespace std;

void name_output(){
    cout << "������\n";
}

double zad2_a_input(){
    double a;
    cout << "������� ������ �����:\n";

    while (!(cin >> a)){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "���� ������������! ���������� �����:\n";
    }
    return a;
}

double zad2_b_input(){
    double b;
    cout << "������� ������ �����:\n";

    while (!(cin >> b)){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "���� ������������! ���������� �����:\n";
    }
    return b;
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b;
    bool division = true;

    a = zad2_a_input();
    b = zad2_b_input();

    if (b == 0.0){
        cout << "!!! �������������� !!!: ������� �� ����� ���������\n";
        division = false;
    }

    cout << "�����: " << a+b << endl;
    cout << "��������: " << a-b << endl;
    cout << "������������: " << a*b << endl;
    if (division){
        cout << "�������: " << a/b << endl;
    }

    return 0;
}
