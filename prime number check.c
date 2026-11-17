#include<stdio.h>
int main()
{
	int i=1,c=0,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("%d is a prime no.",n);
	}
	else
	printf("%d is not a prime no.",n);
	return 0;
}
