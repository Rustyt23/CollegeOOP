//5		Write a C++ program to perform the following relational operations using if , print  desired result on screen ?
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    }
    return 0;
}