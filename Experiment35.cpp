//35		WAP to show polymorphism by using different no. of arguments.
#include<iostream>
using namespace std;

int mul (int a, int b)

{

 cout << a*b;

}

int mul(int a, int b, int c)

{

 cout << a*b*c;

}

int main()

{

mul (5,4);  // with 2 parameter will be called

mul(3,2,9);  // with 3 parameter will be called

}