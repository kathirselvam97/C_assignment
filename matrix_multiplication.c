/*
 Name             : Kathiravan s
 Date             : 25-02-2022
 Assignment title : Find the product of given matrix
 Description      : Printing patterns where number increments from left to right.
 Sample input     : Enter number of rows : 3
		    Enter number of columns : 3
                    Enter values for 3 x 3 matrix :
                    1      2      3
                    1      2      3
                    1      2      3
                    Enter number of rows : 3
                    Enter number of columns : 3
                    Enter values for 3 x 3 matrix :

                    1      1     1
                    2      2     2
                    3      3     3
 Sample output    : Product of two matrix :
                    14      14      14
                    14      14      14
                    14      14      14
*/

#include <stdio.h>  //Header files
#include <stdlib.h>

int matrix_mul(int **, int, int, int **, int, int, int **);  //Function prototype

int main()
{
	    int **mat_a, **mat_b, **result, a_row, a_col, b_row, b_col, i, j;
        printf("Enter number of rows : ");
		scanf("%d", &a_row);
		printf("Enter number of columns : ");  //Get the rows and coloumns for array1 from user
		scanf("%d", &a_col);
		mat_a = malloc(a_row * sizeof(int*));  
		for(i = 0; i < a_row; i++ )            //Get the memory allocations dynamically
		{
			mat_a[i] = malloc(a_col * sizeof(int));
		}
		printf("Enter values for %d x %d matrix :\n", a_row, a_col);
		for(i = 0; i < a_row; i++ )
		{
			for(j = 0; j < a_col; j++ )
			{
				scanf("%d", &mat_a[i][j]);  //Get the values from the user for array1
			}
		}
        printf("Enter number of rows : ");  
		scanf("%d", &b_row);
		printf("Enter number of columns : ");  //Get the rows and coloumns for array2 from user
		scanf("%d", &b_col);
		if ( a_col != b_row )
		{
			printf("Matrix multiplication is not possible\n");
			return 0;
		}
		mat_b = malloc(b_row * sizeof(int*));
		for(i = 0; i < b_row; i++ )
		{
			mat_b[i] = malloc(b_col * sizeof(int)); //Get the memory allocations dynamically
		}
		printf("Enter values for 3 x 3 matrix :\n");
		for(i = 0; i < b_row; i++ )
		{
			for(j = 0; j < b_col; j++ )
			{
				scanf("%d", &mat_b[i][j]);  //Get the values from the user for array2
			}
		}
		result = malloc(a_row * sizeof(int*));  //Get the memory allocations dynamically for resultant array
		for(i = 0; i < b_col; i++ )
		{
			result[i] = malloc(b_col * sizeof(int));
		}
		
		matrix_mul(mat_a, a_row, a_col, mat_b, b_row, b_col, result);  //Call the function 
		for(i = 0; i < a_row; i++)
		{
			for(j = 0; j < b_col; j++)
				printf("%3d", result[i][j]);  //Print the result
			printf("\n");
		}
		free(mat_a);
	    free(mat_b);  //Free the memory allocated dynamically when program ends
}

int matrix_mul(int **mat_a, int a_row, int a_col, int **mat_b, int b_row, int b_col, int **result)
{
	int i, j, k = 0, sum = 0;
	for ( i = 0; i < a_row; i++ )
	{
		for ( j = 0; j < b_col; j++ )  
		{
		   result[i][j] = 0;  //Assign the values to zero default it has garbage values
		   for( k = 0; k < b_row; k++ )
		   {
			   result[i][j] += mat_a[i][k] * mat_b[k][j]; 
		   }
		}
	}
}


