#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include "Points.h"

using namespace std;
//public private protected

void main() {

    setlocale(0, "");
    srand(time(NULL));

    int num;

    Point p;
    int a = 5;
    int b = 5;
    int c = 6;

    p.setX(a);
    p.setY(b);
    p.setZ(c);

    const char* path = "C:\\Users\\tekat\\source\\repos\\ConsoleApplication3\\ConsoleApplication3\\pepos.txt";

    FILE* in;

	if (fopen_s(&in, path, "r+") != NULL) {
		cout << "Ошибка." << endl;
	}
	else {

        fprintf(in, "%d ", p.getX());
        fprintf(in, "%d ", p.getY());
        fprintf(in, "%d ", p.getZ());

        fscanf(in, "%f %f %f", &c, &a, &b); // не доделал
	}
    p.setX(a);
    p.setY(b);
    p.setZ(c);
    cout << p.getX() << " ";
    cout << p.getY() << " ";
    cout << p.getZ() << " ";

    cout << endl;
}
