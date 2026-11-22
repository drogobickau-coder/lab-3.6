#include "D1.h"
#pragma execution_character_set("utf-8")

D1::D1() : B1(), B2()
{
    setD1(0);
}

// x -> D1::d1, y -> B1::b1, z -> B2::b2
D1::D1(int x, int y, int z) : B1(y), B2(z)
{
    setD1(x);
}

D1::~D1() {}

void D1::show_D1() const
{
    cout << "class D1:" << endl;
    show_B1();
    show_B2();
    cout << "show_D1()" << endl
        << "D1::d1 = " << getD1() << endl << endl;
}