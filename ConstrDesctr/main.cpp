#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include "Drob.h"

using namespace std;
//public private protected

void main() {

    setlocale(0, "");
    srand(time(NULL));

    Drob one;
    one.print();
    cout << endl;

    Drob two{ 2 };
    two.print();
    cout << endl;

    Drob three{ 5,10 };
    three.print();

    
}
