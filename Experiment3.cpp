//3		Write a C++ program for addition using the concept of  Global variable and print it's result ?
#include<iostream>
using namespace std;
int firstNumber, secondNumber, sumOfTwoNumbers;
int main()
{
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;

    return 0;
    }