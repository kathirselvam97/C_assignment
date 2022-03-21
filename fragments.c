/*
 Name             : Kathiravan s
 Date             : 28-02-2022
 Assignment title : Implement fragments using Array of Pointers
 Description      : 1) Read number of rows from user
                    2) Use loop and allocate memory for number of coloumns for each row
                    3) Read elements for array
                    4) Sum each values reader enter
                    5) Find avg and store it in last column of each row
                    6) call the function and Use bubble sort to swap the rows according to its avg
                    7) Swap the number of coloumn value in array a too to print the desired result
                    8) Print result in main function
 Sample input     : Enter no.of rows : 3
		    Enter no of columns in row[0] : 4
		    Enter no of columns in row[1] : 3
		    Enter no of columns in row[2] : 5
		    Enter 4 values for row[0] : 1 2 3 4
		    Enter 3 values for row[1] : 2 5 9
		    Enter 5 values for row[2] : 1 3 2 4 1
 Sample output    : Before sorting output is:
		    1.000000 2.000000 3.000000 4.000000 2.500000
      		    2.000000 5.000000 9.000000 5.333333
  		    1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
		    After sorting output is:
		    1.000000 3.000000 2.000000 4.000000 1.000000 2.200000
		    1.000000 2.000000 3.000000 4.000000 2.500000
		    2.000000 5.000000 9.000000 5.333333
*/

#include <stdio.h>
#include <stdlib.h>  //Header file

int sort(int, int *, float **);  //Function prototype

int main()
{
	int row, col, i, j;
	printf("Enter no.of rows : ");  //Read number of rows from user
	scanf("%d", &row);
	float *arr[row], sum, avg;  //Decalre array and variables
    int a[row]; 
	for( i = 0; i < row; i++ )
	{
		printf("Enter no of columns in row[%d] : ", i);  //Use loop and allocate memory for number of coloumns for each row
		scanf("%d", &col);
		arr[i] = malloc((col+1) * sizeof(float));
		a[i] = col;
	}
	for ( i = 0; i < row; i++ )
	{
		printf("Enter %d values for row[%d] : ", a[i], i);  
			for ( j = 0; j < a[i]; j++ )
			{
				scanf("%f", &arr[i][j]);  //Read elements for array
			    sum += arr[i][j];  //Sum each values reader enter
			}
			arr[i][j] = sum / a[i];  //Find avg and store it in last column of each row
			sum = 0;
	}
	printf("Before sorting output is:\n");
	for ( i = 0; i < row; i++ )
	{
		for ( j = 0; j < a[i]+1; j++ )  //Print the elements in array
		{
			printf("%f ", arr[i][j]);
		}
		printf("\n");
	}
    sort(row, a, arr);  //Call the function
	printf("After sorting output is:\n");
	for ( i = 0; i < row; i++ )
	{
		for ( j = 0; j < a[i]+1; j++ )
		{
			printf("%f ", arr[i][j]);  //Print the array after sorting
		}
		printf("\n");
	}

}

int sort(int row, int *a, float **arr)
{
	int i ,j;
	float *temp;  //Declare the temp pointer variable
	int temp1;
	for( i = 0; i < row; i++ )
	{
		for( j = i+1; j < row; j++ )
		{
			if( arr[i][a[i]] > arr[j][a[j]] )  //Use bubble sort and swap the rows according to its avg 
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				temp1 = a[j];
				a[j] = a[i];  //Swap the number of coloumn value in array a too to print the desired result
				a[i] = temp1;
			}
		}
	}
}

