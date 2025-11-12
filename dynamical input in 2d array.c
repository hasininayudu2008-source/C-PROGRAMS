//2  dimensional array
#include<stdio.h>
int main()
{
	int i,j,r,c;
	int A[r][c];
	printf("enter rows and columns:");
	scanf("%d %d",&r,&c);
	printf("Enter array elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\n Elements are:\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",A[i][j]);
		}("\n");
	}
		return 0;	
}