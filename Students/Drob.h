#pragma once
#include <iostream>

using namespace std;

class Student {
    char* name;
    int* marks;
    int size;

    void keyName(const char* Uname) {
        name = new char[strlen(Uname) + 1];
        strcpy_s(name, strlen(Uname) + 1, Uname);
    }

    void keyMarks(int* Umarks, int Usize) {
        marks = new int[Usize];

        for (int i = 0; i < Usize;i++) {
            marks[i] = Umarks[i];
        }

        size = Usize;
    }

public:
    Student(const char* Uname,int* Umarks,int Usize) {

        keyName(Uname);

        keyMarks(Umarks, Usize);

    }
    Student(const char* Uname) {
        int Usize = 3;

        keyName(Uname);

        keyMarks(new int[3] {1,1,1}, 3);
    }
    Student(int* Umarks, int Usize) {

        keyName("Noname");

        keyMarks(new int[3] {1, 1, 1}, 3);

    }
    Student() {

        keyName("Noname");

        keyMarks(new int[3] {1, 1, 1}, 3);
        
    }

    void setName(const char* Uname) {
        delete[] name;

        keyName(Uname);
    }

    void setMarks(int* Umarks, int Usize) {
        delete[] marks;
        keyMarks(Umarks, Usize);
    }

    void print();

    ~Student() {
        cout << name << " умер\n";
        if (name) {
            delete[]name;
        }

        if (marks) {
            delete[] marks;
        }
        
    }
};
