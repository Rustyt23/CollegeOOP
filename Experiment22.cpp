//22		write a program to calculate the sum using class adder with following 3 functions.
#include<iostream>
using namespace std;
class adder     //Declaration of adder class
{
	public:
		adder(int i=0)      //Constructor
		{
		    int total = i;                            //interface to outside world
		}
		void addnumber(int number)
		{
			total +=number;
		}
		int showtotal()
		{
			return total;
		}
    private:        //Private members
        int total;
};
int main(){
	adder n1;
	n1.addnumber(10);
	n1.addnumber(20);
	n1.addnumber(30);
	cout<<"Total "<<n1.showtotal()<<endl;
	return 0;
}
