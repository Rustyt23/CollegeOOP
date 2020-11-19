//18		write a program to show the concept of copy constructor
#include "iostream"
using namespace std;

class point
{
public:
    double x, y;
  point (double px, double py)
  {
    x = px, y = py;
  }
  point (point& a)
  {
    x = a.x, y = a.y;
  }
};

int main(void)
{

  point a(4,6),b(a);
  cout << "x: " << b.x << endl<< "y: " << b.y;
  return 0;
}