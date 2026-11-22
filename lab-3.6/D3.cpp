#include "D3.h"
#pragma execution_character_set("utf-8")

D3::D3() : D2()
{
    setD3(0);
}

// x -> D3::d3, y -> D2::d2, z -> D1::d1, i -> B1::b1, j -> B2::b2, k -> B3::b3
D3::D3(int x, int y, int z, int i, int j, int k) : D2(y, z, i, j, k)
{
    setD3(x);
}

D3::~D3() {}

void D3::show_D3() const
{
    cout << "class D3:" << endl;
    show_D2();
    cout << "show_D3()" << endl
        << "D3::d3 = " << getD3() << endl << endl;
}