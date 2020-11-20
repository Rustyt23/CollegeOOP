//50		Create a base class called shape. Use this class to store two double type values that could be used to compute the area of figures. Derive two specific classes called triangle and rectangle from the base shape. Add to the base class, a member function get_data() to initialize base class data members and another member function display_area() to computeand display the area of figures. Make display_area() as a virtual function and redefine thisfunction in the derived classes to suit their requirements.
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;

class Shape
{
public:
double height,base;

Shape()
{
height=0;
base=0;
}

void get_data()
{
cout<<"\nEnter height and base to compute are :";
cin>>height>>base;
}

virtual void display_area()
{
}
};

class Triangle : public Shape
{
public:

void display_area()
{
cout<<height;
cout<<"\nArea of Triangle = "<<(height*base)/2;
}
};

class Rectangle : public Shape
{
public:
void display_area()
{
cout<<"\nArea of Rectangle = "<<height*base;
}
};
int main()
{
Shape *s;
Triangle t;
t.get_data();
s=&t;
s->display_area();
Rectangle r;
r.get_data();
s=&r;
s->display_area();
return 0;
}