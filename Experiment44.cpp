//44		WAP to overload left shift operator and show the object handling by reference.
//40.WAP to overload left shift operator and show the object handling by reference.
#include<iostream>
using namespace std;
class Time
{
    int hr, min, sec;
    public:
    Time()
    {
        hr=0, min=0; sec=0;
    }

    Time(int h, int m, int s)
    {
        hr=h, min=m; sec=s;
    }

    friend ostream& operator << (ostream &ou, Time &tm);
};

ostream& operator << (ostream &ou, Time &tm)
{
    ou << "Time is: " << tm.hr << " hour : " << tm.min << " min : " << tm.sec << " sec";
    return ou;
}

int main()
{
    Time tm(3,15,45);
    cout << tm;
    return 0;
}