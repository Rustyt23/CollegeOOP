//29	Lab 8	write a program to show usages of friend function to display.
// show usages of friend function to display.
#include <iostream>
class A {
private:
    int a;

public:
    A() { a = 0; }
    friend class B; // Friend Class
};

class B {
private:
    int b;

public:
    void showA(A& x)
    {

        std::cout << "A::a=" << x.a;
    }
};

int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}