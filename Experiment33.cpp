//33	Lab 9	WAP to show polymorphism by sum in int & double type.
//polymorphism by sum in int & double type
#include<iosteam>

using namesapce std;

int mul (int a,int b)

{

 cout << a+b;

}

int mul(double a,double b)

{

 cout << a+b;

}

int main()

{

mul (5,6);  // int

mul(3.3,8.6);  // double

}