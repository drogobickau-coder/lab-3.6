#include <iostream>
#include <Windows.h>
#include "D3.h"
#pragma execution_character_set("utf-8")

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    {
        setlocale(LC_ALL, "uk_UA.UTF-8");
    }

    B1 o1(10);
    cout << "B1 o1(10);" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << endl << "Ієрархія класу B1:" << endl;
    o1.show_B1();

    B2 o2(20);
    cout << "B2 o2(20);" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << endl << "Ієрархія класу B2:" << endl;
    o2.show_B2();

    B3 o3(30);
    cout << "B3 o3(30);" << endl;
    cout << "sizeof(B3) = " << sizeof(B3) << endl;
    cout << endl << "Ієрархія класу B3:" << endl;
    o3.show_B3();

    D1 o4(100, 110, 120);
    cout << "D1 o4(100, 110, 120);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "Ієрархія класу D1:" << endl;
    o4.show_D1();

    D2 o5(200, 210, 220, 230, 240);
    cout << "D2 o5(200, 210, 220, 230, 240);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "Ієрархія класу D2:" << endl;
    o5.show_D2();

    D3 o6(300, 310, 320, 330, 340, 350);
    cout << "D3 o6(300, 310, 320, 330, 340, 350);" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << endl << "Ієрархія класу D3:" << endl;
    o6.show_D3();

    return 0;
}