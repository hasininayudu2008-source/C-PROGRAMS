#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            scanf("%d", &A[i][j]);
        }
    }

    // Check if matrix is lower triangular
    for (i = 0; i < n; i++)
	 {
        for (j = i + 1; j < n; j++)
		 {  
            if (A[i][j] != 0) 
			{
                printf("\nThe matrix is not a lower triangular matrix.\n");
                
            }
        }
    }

    printf("\nThe matrix is a lower triangular matrix.\n");
    return 0;
}
