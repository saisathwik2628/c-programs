#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s,area,x;
	printf("Enter a,b,c values:\n");
    scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	x=s*(s-a)*(s-b)*(s-c);
	area=sqrt(x);
	printf("The area of triangle=%d",area);
	return 0;
	
		
}

