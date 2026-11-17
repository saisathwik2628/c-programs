#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,mod;
	float div;
	printf("Enter a&b:\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	mod=a%b;
	div=(float)(a/b);
	printf("Sum=%d\nSub=%d\nMul=%d\nRem=%d\nDiv=%f",add,sub,mul,mod,div);
	return 0;
	
}
