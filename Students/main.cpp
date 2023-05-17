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
    const int size = 7;
    int arr[size] = { 1,2,3,5,6,8,5 };

    Student Oleg{ "Олег",arr,size };
    Oleg.print(); cout << endl;

    Student Unknown;
    Unknown.print(); cout << endl;

    Student Sergey{ "Серёжа" };
    Sergey.print(); cout << endl;

    Student Not_Signed(arr, size);
    Not_Signed.print(); cout << endl;
    
    const int size2 = 10;
    int arr2[size2] = { 5,2,5,3,4,5,5,3,4,5 };
    Oleg.setName("Дима");
    Oleg.setMarks(arr2, size2);
    Oleg.print(); cout << "\n";
    
}
