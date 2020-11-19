//23	Lab 6	Write A C++ Program To Declare The Local Object.
#include<stdio.h>
class global{
    public:
    int a;
    scope(int b)
    {
        a = b;
    };
};
int main()
{


global local(8);

    printf("global class with local object = %d\n", local.a);
    return 0;
    }
