#pragma once
#include "D1.h"
#include "B3.h"

// D2 успадковує D1 відкрито (public) та B3 захищено (protected)
class D2 : public D1, protected B3
{
private:
    int d2;
public:
    D2();
    D2(int x, int y, int z, int i, int j);
    ~D2();

    int getD2() const { return d2; }
    void setD2(int x) { d2 = x; }

    void show_D2() const;
};