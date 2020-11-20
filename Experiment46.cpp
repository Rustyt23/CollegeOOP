//46		Create a class FLOAT that contains one float data member. Overload all the four arithmetic operators so that they operate on the objects of FLOAT.
#include<iostream>
#include<stdio.h>
using namespace std;

class FLOAT
{
private:
float x;
public:
void setData(int a)
{
x=a;
}
void getData()
{
cout<<"\nx:"<<x;
}

//Defining an operator function + to overload
FLOAT operator +(FLOAT c)
{
FLOAT temp;
temp.x=x+c.x;
return temp;
}

//Defining an operator function - to overload
FLOAT operator -(FLOAT c)
{
FLOAT temp;
temp.x=x-c.x;
return temp;
}
//Defining an operator function * to overload
FLOAT operator *(FLOAT c)
{
FLOAT temp;
temp.x=x*c.x;
return temp;
}

//Defining an operator function / to overload
FLOAT operator /(FLOAT c)
{
FLOAT temp;
temp.x=x/c.x;
return temp;
}
};

int main()
{
FLOAT c1,c2,c3,c4,c5,c6;
c1.setData(20);
c2.setData(10);

//Overloading operator +
c3=c1+c2;
c3.getData();

//Overloading operator -
c4=c1-c2;
c4.getData();

//Overloading operator *
c5=c1*c2;
c5.getData();

//Overloading operator /
c6=c2/c1;
c6.getData();
return 0;
}