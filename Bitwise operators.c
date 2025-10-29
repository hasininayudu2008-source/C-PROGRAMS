#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Bitwise operations:\n");
	printf("Bitwise AND(&)\n%d&%d=%d\n",a,b,a&b);
	printf("Bitwise OR(|)\n%d|%d=%d\n",a,b,a|b);
	printf("Bitwise XOR(^)\n%d^%d=%d\n",a,b,a^b);
	printf("Bitwise left shift(<<)\n%d<<%d=%d\n",a,b,a<<b);
	printf("Bitwise right shift(>>)\n%d>>%d=%d\n",a,b,a>>b);
	return 0;
}