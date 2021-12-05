#include <stdio.h>
int main()
{
    int a[100]={0,0,0,0};
    int ans=0;
    for(int i=2; i<=100; i++)
    {
        if(a[i]==0)
        {
            ans++;
            for(int k=i+i; k<100; k=k+i)
            {
                a[k]=1;
            }
        }
    }
    printf("ans=%d",ans);
}
