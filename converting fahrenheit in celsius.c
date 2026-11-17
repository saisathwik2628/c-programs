#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temp in fahrenheit:\n");
	scanf("%f",&f);
	c=(f-32)*5.0/9.0;
	printf("Temp in celsius:%f",c);
	return 0;
}
