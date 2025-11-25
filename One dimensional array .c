#include<stdio.h>
int main()
{
	int i, n,sum=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;
}