#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	printf("Original array:");
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	//specify the index to replace
	int index_to_replace=2;
	//specify new value
	int new_value=10;
	//Replace the element at the specified index
	arr[index_to_replace]=new_value;
	//Display the modified array
	printf("\nModified array:");
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}