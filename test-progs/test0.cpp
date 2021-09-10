#include <iostream>
#include <windows.h>


using namespace std;

int foo1(){
    int a, b;
    cin >> a >> b;
    return a+b;
}

int foo2(){
}

int main(){
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int summa = foo1();
    cout << summa;
    return 0;
}
