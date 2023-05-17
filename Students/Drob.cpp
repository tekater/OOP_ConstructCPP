#include "Drob.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void Student::print() {
    cout << "Имя: " << name << endl;
    cout << "Оценки: ";
    for (int i = 0; i < size; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}
