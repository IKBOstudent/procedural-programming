#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <algorithm>

using std::cout;
using std::string;
using std::endl;
using std::cin;
using std::vector;
using std::ifstream;
using std::sort;

using namespace std::chrono;

void quick_sort() {
    vector<int> a;

    string filename("../domashka/0.txt");
    ifstream fin;

    int n = 0;
    fin.open(filename);
    if (fin.is_open()){
        fin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            fin >> x;
            a.push_back(x);
        }
    }
    fin.close();

    auto start = steady_clock::now();
    sort(a.begin(),  a.end());
    auto end = steady_clock::now();
    cout << "" << (double) duration_cast<nanoseconds>(end - start).count() / 1000000 << endl;
}
