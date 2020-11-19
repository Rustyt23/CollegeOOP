//4		Write a C++ program to  perform all the basic arithmetic  operations(+ , - , / , * , Incrementation , Decrementation ) and take the values from the user , print  desired result on screen ?
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 4, res;

    cout<<"a is "<<a<<" and b is "<<b<<"\n";

    res = a + b;
    cout << "a+b is: "<< res << "\n";

    res = a - b;
    cout << "a-b is: "<< res << "\n";

    res = a * b;
    cout << "a*b is: "<< res << "\n";

    res = a / b;
    cout << "a/b is: "<< res << "\n";

    res = a % b;
    cout << "a%b is: "<< res << "\n";

    cout << "a++ is: "<< a++ << "\n";

    cout << "a-- is: "<< a-- << "\n";

    return 0;
}