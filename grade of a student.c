#include<stdio.h>
int main()
{
    int a;
    printf("Enter percentage acquired:\n");   
    scanf("%d",&a);
    if(a>=85)
    {
    	printf("A is graded");
	}
	else if(75<a<85)
	{
		printf("B is graded");
	}
	else if(65<a<75)
	{
		printf("C is graded");
	}
	else if(55<a<45)
	{
		printf("D is graded");
	
	}
	else
	{
		printf("F is graded");
		
	}
	return 0;
}
