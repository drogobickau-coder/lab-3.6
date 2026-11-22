#include "B1.h"
#pragma execution_character_set("utf-8")

B1::B1()
{
    setB1(0);
}

B1::B1(int x)
{
    setB1(x);
}

B1::~B1() {}

void B1::show_B1() const
{
    cout << "class B1:" << endl;
    cout << "show_B1()" << endl
        << "B1::b1 = " << getB1() << endl << endl;
}