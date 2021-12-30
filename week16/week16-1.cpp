#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c=1;
	while(c<=n)
	{
		int i=1;
		while(i<=n)
		{
			if(c<=n-i) printf(" ");
			else printf("*");
			i++;
		}

		printf("\n");
		c++;
	}
}
