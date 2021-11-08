#include <iostream>
#include "../HEADER_zads.h"
#include <fstream>
#include <vector>
#include <chrono>

using std::cout;
using std::string;
using std::endl;
using std::cin;
using std::vector;
using std::ifstream;

using namespace std::chrono;

template <typename T>
void swap(T& x, T& y) {
    T tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
void heapify(vector<T>& a, int i, int border) {
    // изначально корневой элемент с индеском i
    // имеет 2 дочерних элемента с индексами (2i+1) и (2i+2)
    int root = i;
    int l_child = 2 * i + 1;
    int r_child = 2 * i + 2;

    // проверяем является ли корневой элемент наибольшим
    // иначе меняем его на максимальный из дочерних
    if (l_child < border and a[root] < a[l_child])
        root = l_child;
    if (r_child < border and a[root] < a[r_child])
        root = r_child;

    // если корневой индекс изменился меняем предыдущий на новый
    if (root != i) {
        swap(a[i], a[root]);

        // рекурсивно выстраиваем новую ветку дерева
        // с начальным корневым элементом с индексом root
        heapify(a, root, border);
    }
}

template <typename T>
void sort(vector<T>& a) {
    // a = 4 6 9 9 1 5 7 2 3
    int n = a.size();

    // представляем массив в сортирующем дереве
    // начинаем с индекса (n/2-1),
    // так как после него все элементы являются листьями дерева
    for (int i = n/2 - 1; i >= 0; --i)
        heapify(a, i, n);

    for (int i = n - 1; i >= 0; --i) {
        // перемещаем очередной корень (индекс 0)
        // полученного дерева в конец массива
        swap(a[0], a[i]);

        // строим дерево без последнего элемента массива,
        // т.е. ищем очередной максимальный элемент
        heapify(a, 0, i);
    }
}

void heap_sort(){
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
    sort(a);
    auto end = steady_clock::now();
    cout << "" << (double) duration_cast<nanoseconds>(end - start).count() / 1000000 << endl;
}