//11	Lab 3	Write a C++ program  to print a string on the screen using the concept  of objects and class ?
#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:

    string name;

    void printname()
    {
       cout << "My name is: " << name;
    }
};

int main() {

    Geeks obj1;

    obj1.geekname = "Rustyt";

    obj1.printname();
    return 0;
}