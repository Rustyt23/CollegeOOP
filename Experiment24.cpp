//24		Write A C++ Program To Declare The Local Class. Local Class And Local Objects.
#include<stdio.h>

int main()
{

class local{
    public:
    int a;
    scope(int b)
    {
        a = b;
    };
};
local g(8);

    printf("local class with local object = %d\n", g.a);
    return 0;
    }
