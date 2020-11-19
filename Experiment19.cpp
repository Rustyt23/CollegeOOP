//19		write a program to calculate area of circle using concept of function definition outside the class illustrate concept of constructor overloading
#include<iostream>
using namespace std;

class circle
{
        float radius, area;
    public:
        circle()
        {
                cout<<"\n Enter the value of Radius : ";
                cin>>radius;
        }
        void calculate();
        void display();
};
inline void circle :: calculate()
{
        area = 3.14 * radius * radius;
}
inline void circle :: display()
{
        cout<<"\n Area of Circle : "<<area;
}
int main()
{
        circle cr;
        cr.calculate();
        cr.display();
        return 0;
}