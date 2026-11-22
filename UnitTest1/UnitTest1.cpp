#include "pch.h"
#include "CppUnitTest.h"

#include "../lab-3.6/B1.h"
#include "../lab-3.6/B1.cpp"
#include "../lab-3.6/B2.h"
#include "../lab-3.6/B2.cpp"
#include "../lab-3.6/B3.h"
#include "../lab-3.6/B3.cpp"
#include "../lab-3.6/D1.h"
#include "../lab-3.6/D1.cpp"
#include "../lab-3.6/D2.h"
#include "../lab-3.6/D2.cpp"
#include "../lab-3.6/D3.h"
#include "../lab-3.6/D3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab36
{
    TEST_CLASS(UnitTestLab36)
    {
    public:

        // Перевірка ініціалізації базових класів через конструктори та гетери
        TEST_METHOD(TestBaseClasses)
        {
            B1 o1(10);
            B2 o2(20);
            B3 o3(30);

            Assert::AreEqual(10, o1.getB1());
            Assert::AreEqual(20, o2.getB2());
            Assert::AreEqual(30, o3.getB3());
        }

        // Перевірка похідного класу D3 (передача параметрів по всій ієрархії)
        TEST_METHOD(TestD3ConstructorAndGetters)
        {
            // x=10 (d3), y=20 (d2), z=30 (d1), i=40 (b1), j=50 (b2), k=60 (b3)
            D3 obj(10, 20, 30, 40, 50, 60);

            Assert::AreEqual(10, obj.getD3());
            Assert::AreEqual(20, obj.getD2());
            Assert::AreEqual(30, obj.getD1());
            Assert::AreEqual(50, obj.getB2()); // B2 успадковується відкрито (public)
        }

        // Перевірка роботи сетерів
        TEST_METHOD(TestSetters)
        {
            D3 obj;
            obj.setD3(111);
            obj.setD2(222);
            obj.setD1(333);
            obj.setB2(444);

            Assert::AreEqual(111, obj.getD3());
            Assert::AreEqual(222, obj.getD2());
            Assert::AreEqual(333, obj.getD1());
            Assert::AreEqual(444, obj.getB2());
        }

        // Перевірка розмірів об'єктів при множинному успадкуванні
        TEST_METHOD(TestObjectSizes)
        {
            Assert::AreEqual(sizeof(int) * 1, sizeof(B1));
            Assert::AreEqual(sizeof(int) * 3, sizeof(D1)); // b1 + b2 + d1
            Assert::AreEqual(sizeof(int) * 5, sizeof(D2)); // d1(3) + b3 + d2
            Assert::AreEqual(sizeof(int) * 6, sizeof(D3)); // d2(5) + d3
        }
    };
}