#pragma once
#include <iostream>

using namespace std;

class Drob {
    int ch, zn;
public:
    Drob() {
        ch = 1;
        zn = 10;
        cout << "Дефолт Конструктор\n";
    }
    Drob(int x) {
        ch = x;
        zn = x;
        cout << "1 int Конструктор\n";
    }
    Drob(int x, int y) {
        ch = y;
        zn = x;
        cout << "2 int Конструктор\n";
    }
    void print();

    ~Drob() { // Удалятор
        cout << "\nДеструктор отработан!!!.\n";
    }
};
