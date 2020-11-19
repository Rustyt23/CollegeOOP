//37	Lab 10	WAP to perform single inheritance
//single inheritance
#include <iostream>
using namespace std;

class A
{
    public:
 	int x, y;
 	void getdata()
 	{
   	    cout << "\nEnter value of x and y:\n"; cin >> x >> y;
 	}
};
class B : public A
{
    public:
 	void product()
 	{
 	    cout << "\nProduct= " << x * y;
 	}
};

int main()
{
    B obj1;
    obj1.getdata();
    obj1.product();
    return 0;
}