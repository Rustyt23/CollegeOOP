//15		Write a C++ program  to  implement the concept of the object as  function argument in which we will pass on the values in the object as function argument (part no. , car model )
#include<iostream.h>
class car{
private:
int part ,model;

public:
void info(int p ,int m){
    part = p;
    model=m;
}
void display(){
    cout<<"Model:"<<model;
    cout<<"Part:"part;

}
};
int main(){
car c;
c.info(234,56);
c.display();

return 0;
}