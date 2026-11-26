#include<stdio.h>
int main()
{
	int n,i,a[100],*p,key;
	p=a;
	printf("Enter no. of array values:\n");
	scanf("%d",&n);
	printf("Enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("Enter key element to search:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(*(p+i)==key)
		{
			printf("Elemnt found at %d location",i+1);
			break;
		}
	}
	if(i>=n)
	printf("Elemnt not found");
	return 0;
}
