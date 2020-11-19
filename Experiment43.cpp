//43		WAP to overload unary minus operator.
#include <iostream>
using namespace std;
class Distance {
   private:
   int feet;
   int inches;
   public:
   Distance(int f, int i) {
      feet = f;
      inches = i;
   }
   void display() {
      cout << "F: " << feet << " I:" << inches <<endl;
   }
   Distance operator--() {
      feet = --feet;
      inches = --inches;
      return Distance(feet, inches);
   }
};
int main() {
   Distance D(-1, 10);
   D.display();
   --D;
   D.display();
   return 0;
}