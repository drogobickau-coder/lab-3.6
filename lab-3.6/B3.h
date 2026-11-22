#pragma once
#include <iostream>
using namespace std;

class B3
{
private:
    int b3;
public:
    B3();
    B3(int x);
    ~B3();

    int getB3() const { return b3; }
    void setB3(int x) { b3 = x; }

    void show_B3() const;
};