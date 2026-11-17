#include<stdio.h>
int main()
{
	float pa,t,r,si;
	printf("Enter principle amount:\n");
	scanf("%f",&pa);
	printf("Enter time:\n");
	scanf("%f",&t);
	printf("Enter rate of intrest:\n");
	scanf("%f",&r);
	si=(pa*t*r)/100;
	printf("Simple intrest=%f",si);
	return 0;
	
}
