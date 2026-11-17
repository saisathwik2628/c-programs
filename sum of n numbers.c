#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter n value:\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum=%d\n",sum);
	return 0;
	
}
