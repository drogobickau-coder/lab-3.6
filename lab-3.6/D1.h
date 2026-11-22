#pragma once
#include "B1.h"
#include "B2.h"

// D1 успадковує B1 захищено (protected) та B2 відкрито (public)
class D1 : protected B1, public B2
{
private:
    int d1;
public:
    D1();
    D1(int x, int y, int z);
    ~D1();

    int getD1() const { return d1; }
    void setD1(int x) { d1 = x; }

    void show_D1() const;
};