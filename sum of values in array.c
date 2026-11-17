#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("SUM=%d",sum);
	return 0;
}