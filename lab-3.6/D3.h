#pragma once
#include "D2.h"

// D3 успадковує D2 відкрито (public)
class D3 : public D2
{
private:
    int d3;
public:
    D3();
    D3(int x, int y, int z, int i, int j, int k);
    ~D3();

    int getD3() const { return d3; }
    void setD3(int x) { d3 = x; }

    void show_D3() const;
};