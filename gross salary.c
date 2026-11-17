#include<stdio.h>
int main()
{
	float bs,da,ta,gross;
	printf("Enter Basic Salary:");
	scanf("%f",&bs);
	da=bs*(10.0/100.0);
	ta=bs*(25.0/100.0);
	gross=bs+da+ta;
	printf("Gross salary of the employee:%f",gross);
	return 0;
}
