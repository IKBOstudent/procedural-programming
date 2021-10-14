#include <iostream>
#include "zads.h"
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void perm(vector<int> a, int N, int level, long long& ans){
    if (level == N){
        bool good = false;
        for (int i = 0; i < N; i++) {
            if (a[i] == i+1) {
                good = true;
                ans++;
                break;
            }
        }
//
//        if (good) {
//            for (int j = 0; j < N; j++)
//                cout << a[j] << " ";
//            cout << endl;
//        }
        return;
    }
    for (int i = level; i < N; i++){
        std::swap(a[level], a[i]);

        perm(a, N, level + 1, ans);

        std::swap(a[level], a[i]);
    }
}

void zad_shariki(){
    cout << "------------------------------------------------------\n";
    cout << "Task 32 BEGIN\n\n";

    /**
     * There are 10 balls in a bin
     * The balls are numerated from 1 to 10\n\n
     *
     * You pull every ball out of the bin one by one and
     * write down the number of the ball you've pulled in a numerated list\n\n
     *
     * Count the number of possible permutations of balls numbers when the index
     * (position of the ball in the list) of at least one ball is equal to it's number
     */

    cout << "\'\'\' This program solves shariki problem \'\'\'\n";

    int N;
    while (true) {
        N = (int) int_type_input(); // number of balls
        if (N < 1 or N > 11)
            cout << "Invalid input\n";
        else
            break;
    }

    vector<int> nums(N, 0);

    for (int i = 0; i < N; i++)
        nums[i] = i+1;

    long long ans = 0;

    cout << "\nTask 32 OUTPUT:\n\n";

    perm(nums, N, 0, ans);

    cout << "Answer = " << ans << endl;

    cout << "\nTask 32 END\n";
    cout << "------------------------------------------------------\n\n";
}
