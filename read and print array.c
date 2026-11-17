#include<stdio.h>
int main()
{
	int i;
	int a[5];
	printf("Enter the values:");
	for(i=0;i<5;i++)
	{
		
	scanf("%d",&a[i]);
	}
	printf("The values:\n");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}