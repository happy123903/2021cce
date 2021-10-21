#include <stdio.h>
int main()
{
    int a=999, b=100,x;
    printf("a=%d B=%d x=%d\n",a,b,x);
    x=a;
    printf("a=%d B=%d x=%d\n",a,b,x);
    a=b;
    printf("a=%d B=%d x=%d\n",a,b,x);
    b=x;
    printf("a=%d B=%d x=%d\n",a,b,x);
}
