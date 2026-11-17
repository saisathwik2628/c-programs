#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a&b values:\n");
	scanf("%d%d",&a,&b);
	printf("%d+=%d\n",a,b,a+=b);
	printf("%d-=%d\n",a,b,a-=b);
	printf("%d*=%d\n",a,b,a*=b);
	printf("%d/=%d\n",a,b,a/=b);
	printf("%d%%=%d\n",a,b,a%=b);
	return 0;
	
}
