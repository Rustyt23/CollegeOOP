//6	Lab 2	Write a C++ program to perform  the comparison of two numbers with the help of logical operators using if ,else and check whether the condition is true or not , print  desired result on screen ?
#include <iostream>
using namespace std;

int main() {
    int number1,number2;

    cout << "Enter two integers: ";
    cin >> number1>>number2;

    if (number1 > number2) {
        cout << number1<<">" << number2 << endl;
    }
    else
    cout << number1<<"<" << number2 << endl;
    return 0;
}