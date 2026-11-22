#include "B3.h"
#pragma execution_character_set("utf-8")

B3::B3()
{
    setB3(0);
}

B3::B3(int x)
{
    setB3(x);
}

B3::~B3() {}

void B3::show_B3() const
{
    cout << "class B3:" << endl;
    cout << "show_B3()" << endl
        << "B3::b3 = " << getB3() << endl << endl;
}