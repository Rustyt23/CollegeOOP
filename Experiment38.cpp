//38		WAP to perform modifications with 2 object in above concept.
#include <iostream>
using namespace std;
class Rectangle
{
    int L, B;
    public:
        Rectangle()
        {
            L=2;
            B=2;
        }
        void operator++()
        {
            L+=3;
            B+=3;
        }
        void Display()
        {
            cout<<"\n\tLength: "<<L;
            cout<<"\n\tBreadth: "<<B;
        }
};
int main()
{
   Rectangle R;
   cout<<"\n\tLength & Breadth before increment: ";
   R.Display();
   ++R;
   cout<<"\n\tLength & Breadth after increment: ";
   R.Display();
   return 0;
}
