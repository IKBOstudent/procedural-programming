#include <iostream>
#include <windows.h>

using namespace std;

void zad1_main(){
    cout << "������\n";
}

double check_a_input(){
    double a;
    cout << "������� ������ ����� (����������� [.]):\n";

    while (!(cin >> a)){
        cin.clear();
        //cin.ignore(100, '\n');
        cout << "���� ������������! ���������� ����� ������ ������ �����:\n";
    }
    return a;
}

double check_b_input(){
    double b;
    cout << "������� ������ ����� (����������� [.]):\n";

    while (!(cin >> b)){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "���� ������������! ���������� ����� ������ ������ �����:\n";
    }
    return b;
}

void zad2_main(){
    double a, b;
    bool division = true;

    a = check_a_input();
    b = check_b_input();

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
}

void zad3_main(){
    // ������� ��������� ����: bx + c = 0
    double answer, b, c;
    b = check_a_input();
    c = check_b_input();

    if (!b == 0.0){
        answer = -c/b;
        cout << "x = " << answer << endl;
    } else{
        cout << "��� ������" << endl;
    }
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

//    zad1_main();
//    zad2_main();
    zad3_main();

    return 0;
}
