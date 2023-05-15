#pragma once

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

class Point {
    int x;
    int y;
    int z;
public:

    void setX(int one) {
        x = one;
    }
    void setY(int two) {
        y = two;
    }
    void setZ(int three) {
        z = three;
    }

    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    int getZ() {
        return z;
    }

    void print(const Point& p);

    

};

