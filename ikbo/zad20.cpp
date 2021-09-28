#include <iostream>
#include "zads.h"
#include <cmath>

using std::cout;
using std::endl;

void zad_sinusoida(){
    cout << "------------------------------------------------------\n";
    cout << "Task 20 BEGIN\n\n";

    cout << "\'\'\' This program draws \n"
            "y = sin(x) graph win X- and Y-axis \'\'\'\n";

    cout << "\nTask 20 OUTPUT: \n\n";

    int len = 2;

    int HEIGHT = 6;
    int WIDTH = len*20;

    int h = HEIGHT;
    while (h >= -HEIGHT){
        double real_y = h/6.;
        int w = -WIDTH;
        int match = -WIDTH - 20;
        while (w <= WIDTH) {
            double x = len * M_PI * w/(WIDTH*2);
            double y = (floor(sin(x) * 240)) / 240;
            if (fabs(real_y - y) < 0.03 and abs(h) == HEIGHT){
                cout << "   0   ";
                w += 7;
            }

            else{
                if (fabs(real_y - y) < 0.03 and abs(w - match) > 10){
                    cout << "0";
                    match = w;
                }
                else {
                    if (w == 0)
                        cout << "|";
                    else if (h == 0)
                        cout << "-";
                    else
                        cout << " ";
                }
                w++;
            }
        }
        cout << endl;
        h--;
    }

    cout << "\nTask 20 END\n";
    cout << "------------------------------------------------------\n\n";
}
