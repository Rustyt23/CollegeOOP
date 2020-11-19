//13		Write a C++ program  to  make a class to declare some private members and variables and fill the values in those variables using the object ?
#include<iostream.h>
class car{
private:
int part ,model;

public:
car(int p ,int m){
    part = p;
    model=m;
}
void display(){
    cout<<"Model:"<<model;
    cout<<"Part:"part;

}
};
int main(){
car c(234,56);
c.display();

return 0;
}