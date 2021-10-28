#include <stdio.h>
int main()
{
	float a,x,i,sum=0;
	scanf("%f",&x);
	for(int i=1;i<=x;i++)
	{
		scanf("%f",&a);
		sum=sum+a;
	}
	printf("%.2f",sum/x);
}
