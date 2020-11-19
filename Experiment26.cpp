//26		Write a program for both local and global object
#include<stdio.h>
class scope{
    public:
    int a;
    scope(int b)
    {
        a = b;
    };
};
scope g(8);
int main()
{

    scope l(9);
    printf("Global a = %d\n", g.a);
    printf("local a = %d\n", l.a);

    return 0;
}