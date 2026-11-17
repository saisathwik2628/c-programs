#include<stdio.h>
int main()
{
	int i,n,c=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	if(n%i==0)
	{
		c++;
	}
	if(c==0)
	printf("prime no.");
	else
	printf("Not a prime no.");
	return 0;
}
