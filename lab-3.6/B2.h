#pragma once
#include <iostream>
using namespace std;

class B2
{
private:
    int b2;
public:
    B2();
    B2(int x);
    ~B2();

    int getB2() const { return b2; }
    void setB2(int x) { b2 = x; }

    void show_B2() const;
};