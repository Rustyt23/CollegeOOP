//8		Write a C++ program  to perform the addition of two numbers using the concept of functions declaration  ,print  desired result on screen ?
#include <iostream>
using namespace std;


int addition(int a,int b)
{
	return (a+b);
}

int main()
{
	int num1;
	int num2;
	int add;


	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter second number: ";
	cin>>num2;


	add=addition(num1,num2);


	cout<<"Addition is: "<<add<<endl;

	return 0;
}

