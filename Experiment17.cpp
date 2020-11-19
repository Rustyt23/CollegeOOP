//17		write a program to show the concept of paramaterized constructor
#include <iostream>
using namespace std;

class construct
{
public:
    int a, b;

    // Default Constructor
    construct(int c,int d)
    {
        a = c;
        b = d;
    }
};

int main()
{
    construct c(4,6);
    cout << "a: " << c.a << endl
         << "b: " << c.b;
    return 1;
}