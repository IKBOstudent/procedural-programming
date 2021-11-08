#include "HEADER_zads.h"

void zad_umnozheniye_matrits(){
    cout << "------------------------------------------------------\n";
    cout << "Task 23 BEGIN\n\n";

    cout << "\'\'\' This program prints info about matrix \'\'\'\n";

    int rowA = 3;
    int colA = 4;

    int A[3][4]{
            {5, 2, 0, 10},
            {3, 5, 2, 5},
            {20, 0, 0, 0}
    };

    int rowB = 4;
    int colB = 2;

    double B[4][2]{
            {1.2, 0.5},
            {2.8, 0.4},
            {5, 1},
            {2, 1.5}
    };

    double C[rowA][colB];

    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++){
            double summa = 0;
            for (int iA = 0; iA < 4; iA++){
                summa += A[i][iA] * B[iA][j];
            }
            C[i][j] = summa;
        }
    }

    double total[rowA];

    double maxim_total = C[0][0] + C[0][1];
    double minim_total = maxim_total;

    double summa_total = maxim_total;

    double maxim_com = C[0][1];
    double minim_com = maxim_com;

    double summa_com = maxim_com;

    for (int i = 1; i < rowA; i++){
        total[i] = C[i][0] + C[i][1];

        summa_total += total[i];
        if (total[i] > maxim_total)
            maxim_total = total[i];
        if (total[i] < minim_total)
            minim_total = total[i];

        summa_com += C[i][1];
        if (C[i][1] > maxim_com)
            maxim_com = C[i][1];
        if (C[i][1] < minim_com)
            minim_com = C[i][1];
    }

    cout << "\nTask 23 OUTPUT:\n\n";

    cout << "Max total = " << maxim_total << endl;
    cout << "Min total = " << minim_total << endl;

    cout << "Total = " << summa_total << endl;

    cout << "Max com = " << maxim_com << endl;
    cout << "Min com = " << minim_com << endl;
    cout << "Total com = " << summa_com << endl;

    cout << "\nTask 23 END\n";
    cout << "------------------------------------------------------\n\n";
}
