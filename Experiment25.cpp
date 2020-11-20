//25		Write A C++ Program To Declare The Global Class.
#include<stdio.h>
class global{
    public:
    int a;
    global(int b)
    {
        a = b;
    };
};
global g(8);
int main()
{

    printf("Global = %d\n", g.a);
    return 0;
}