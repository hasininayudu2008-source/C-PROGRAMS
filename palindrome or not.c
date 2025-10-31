#include<stdio.h>
#include<math.h>
int main()
{
	int num,original,reversed=0,remainder;
	printf("Enter an integer:");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		remainder=num%10;
		reversed=reversed*10+remainder;
		num/=10;
	}
	if(original==reversed)
	printf("It is a palindrome\n");
	else
	printf("It is not a palindrome\n");
	return 0;
	
}