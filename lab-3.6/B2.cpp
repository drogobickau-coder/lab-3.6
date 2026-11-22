#include "B2.h"
#pragma execution_character_set("utf-8")

B2::B2()
{
    setB2(0);
}

B2::B2(int x)
{
    setB2(x);
}

B2::~B2() {}

void B2::show_B2() const
{
    cout << "class B2:" << endl;
    cout << "show_B2()" << endl
        << "B2::b2 = " << getB2() << endl << endl;
}