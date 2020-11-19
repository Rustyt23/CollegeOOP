//34		WAP to show polymorphism by squaring of no. In int & double.
//polymorphism by squaring of no. In int & double
#include<iosteam>

using namesapce std;

int mul (int a)

{

 cout << a*a;

}

int mul(double a)

{

 cout << a*a;

}

int main()

{

mul (5);  // int

mul(3.3);  // double

}