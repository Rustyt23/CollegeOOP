//30		write a program to show usages of friend function to show simple operations.
#include <iostream>
class A {
private:
    int a;
    int b;

public:
    A() { a = 0;
          b = 0; }
    friend class B; // Friend Class
};

class B {
private:
    int b;

public:
    void showA(A& x)
    {
        // Since B is friend of A, it can access
        // private members of A
        x.b=3;
        std::cout << "A::a+b=" << x.a+x.b;
    }
};

int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}