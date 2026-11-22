#pragma once
#include <iostream>
using namespace std;

class B1
{
private:
    int b1;
public:
    B1();
    B1(int x);
    ~B1();

    int getB1() const { return b1; }
    void setB1(int x) { b1 = x; }

    void show_B1() const;
};