//12		Write a C++ program  to  create an object and take the data in the  object  through the member function of the class ?
#include<iostream>
using namespace std;

class car{
private:
int part ,model;

public:
void getinfo(int p ,int m){
    part = p;
    model=m;
}
void display(){
    cout<<"Model:"<<model;
    cout<<"Part:"<<part;

}
};
int main(){
car c;
c.getinfo(234,56);
c.display();

return 0;
}