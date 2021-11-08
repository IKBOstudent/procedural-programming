#include "HEADER_zads.h"

using std::swap;

void perm(int* a, int level);

long long fact(int x){
    long long res = 1;
    for (int i = 1; i < x+1; i++)
        res *= i;

    return res;
}

long long ANS;
int N;

void zad_shariki(){
    cout << "------------------------------------------------------\n";
    cout << "Task 32 BEGIN\n\n";

    cout << "\'\'\' This program solves shariki problem \'\'\'\n";

    while (true) {
        number_validator(N); // number of balls
        if (N < 1 or N > 13)
            cout << "Invalid input\n";
        else
            break;
    }

    int nums[N];

    for (int i = 0; i < N; i++)
        nums[i] = i+1;

    ANS = 0;

    cout << "\nTask 32 OUTPUT:\n\n";

    perm(nums, 0);

    cout << "Answer = " << ANS << endl;
    // 11: Answer = 25232230
    // 12: Answer = 302786759
    // 13: Answer = 3936227868

    cout << "\nTask 32 END\n";
    cout << "------------------------------------------------------\n\n";
}

void perm(int* a, int level){
    if (level == N)
        return;

    for (int i = level; i < N; i++){
        swap(a[level], a[i]);

        if (a[i] == i+1)
            ANS += fact(N - level - 1);
        else
            perm(a, level + 1);

        swap(a[level], a[i]);
    }
}