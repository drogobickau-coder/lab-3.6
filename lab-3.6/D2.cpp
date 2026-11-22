#include "D2.h"
#pragma execution_character_set("utf-8")

D2::D2() : D1(), B3()
{
    setD2(0);
}

// x -> D2::d2, y -> D1::d1, z -> B1::b1, i -> B2::b2, j -> B3::b3
D2::D2(int x, int y, int z, int i, int j) : D1(y, z, i), B3(j)
{
    setD2(x);
}

D2::~D2() {}

void D2::show_D2() const
{
    cout << "class D2:" << endl;
    show_D1();
    show_B3();
    cout << "show_D2()" << endl
        << "D2::d2 = " << getD2() << endl << endl;
}