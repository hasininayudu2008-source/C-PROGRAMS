#include<stdio.h>
int main()
{
	float len,wid,area;
	printf("Enter length and width of rectangle(in cm):");
	scanf("%f%f",&len,&wid);
	area=len*wid;
	printf("area of rectangle=%.3fcm\n",area);
	return 0;
}