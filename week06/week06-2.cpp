#include <stdio.h>
int main()
{
    int a=999,b=100,x;
    printf("%d %d\n",a,b);
    x=a; a=b; b=x;
    printf("%d %d",a,b);
}
