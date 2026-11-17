#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("Enter no. of elements in array:\n");
	scanf("%d",&n);
	printf("Enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The even place no.s:");
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		printf("%d\t",a[i]);		
	}
	printf("The odd places no.s");
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		printf("%d\t",a[i]);
	}
	return 0;
	
}
	
	
	
