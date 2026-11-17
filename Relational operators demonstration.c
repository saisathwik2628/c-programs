#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two no.s to perform Relational operators:\n");
	scanf("%d%d",&a,&b);
	printf("%d<%d=%d\n",a,b,a<b);
	printf("%d>%d=%d\n",a,b,a>b);
	printf("%d<=%d=%d\n",a,b,a<=b);
	printf("%d>=%d=%d\n",a,b,a>=b);
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d!=%d=%d\n",a,b,a!=b);
	printf("NOTE:The result of above if \'1\' it is True and \'0\' it is false");
	return 0;
	
}
