//36		Create a class calculation that contains one float data member and int data member. Overload all the four functions addition, subtraction, multiplication and division so that they operate on the objects of calculation class
#include<iostream>
using namespace std;

class calculation{
    int res=0;
    public:
    int sum(int a,int b)
{
    res=a+b;
    return(res);
}

 int sub(int a,int b)
{
    res=a-b;
    return(res);
}

int mul(int a,int b)
{
    res=a*b;
    return(res);
}
int div(int a,int b)
{
    res=a/b;
    return(res);
}
};

int main()
{   calculation c;
    int a,b,m,su,s,d;
    cout<<"\nEnter 1st number :: ";
    cin>>a;
    cout<<"\nEnter 2nd number :: ";
    cin>>b;

    s=c.sum(a,b);
    su=c.sub(a,b);
    m=c.mul(a,b);

    cout<<"\nAddition of two Numbers [ "<<a<<" + "<<b<<" ] = "<<s<<"\n";
    cout<<"\nSubtraction of two Numbers [ "<<a<<" - "<<b<<" ] = "<<su<<"\n";
    cout<<"\nMultiplication of two Numbers [ "<<a<<" * "<<b<<" ] = "<<m<<"\n";
    cout<<"\nDivision of two Numbers [ "<<a<<" * "<<b<<" ] = "<<d<<"\n";

    return 0;
}

