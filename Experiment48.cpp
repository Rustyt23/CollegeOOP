//48		WAP to access private members of derived class using Virtual keyword
#include <iostream>
using namespace std;
class A
{
   int x=5;
    public:
     virtual void display()
    {
        cout << "Value of x is : " << x<<endl;
    }
};
class B: public A
{
    int x = 10;
    public:
    void display()
    {
      cout << "Value of x is : " <<x<<endl;
    }
};
int main()
{
    A *a;
    B b;
    a = &b;
   a->display();
    return 0;
}
