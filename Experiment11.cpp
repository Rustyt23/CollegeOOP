//11	Lab 3	Write a C++ program  to print a string on the screen using the concept  of objects and class ?
#include <iostream>
#include<string.h>
using namespace std;
class Name
{
    public:

    string name;

    void printname()
    {
       cout << "My name is: " << name;
    }
};

int main() {

    Name obj1;

    obj1.name = "Rustyt";

    obj1.printname();
    return 0;
}