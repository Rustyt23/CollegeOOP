//31		write a program to show usages of friend function in duplicating the display value using different variable.
//show usages of friend function in duplicating the display value using different variable.
#include <iostream>
class A {
private:
    int a;

public:
    A() { a = 5; }
    friend class B; // Friend Class
};

class B {
public:
    int b;
    int showA(A& x)
    {
        // Since B is friend of A, it can access
        // private members of A
        std::cout << "A::a=" << x.a;
        return x.a;
    }
};

int main()
{
    A a;
    B b;
    b.b = b.showA(a);
    return 0;
}