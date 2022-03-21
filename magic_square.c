/*
 Name             : Kathiravan s
 Date             : 25-02-2021
 Assignment title : Generate a n*n magic square
 Description      : 1) Read the number from user to create n*n matrix
                    2) Check the number is positive and odd
                    3) Allocate memory for 2d array using calloc
                    4) Call the function
                    5) Find the centre of array and start to fill the number from there
                    6) To fill next numbers just move 1 row up and 1 col right
                    7) If row is 0 then go to last row
                    8) If col is last go to first col
                    9) Also check there is number before printing the number
                    10) If seen then just increase one row and print the number.
 Sample input     : Enter a number: 3
 Sample output    : 8      1      6
                    3      5      7
                    4      9      2
*/

#include <stdio.h>  //Header files
#include <stdlib.h>

void magic_square(int **, int);  //Function prototype

int main()
{
	int num, i ,j;
	printf("Enter a number: ");  //Read the number from user to create n*n matrix
	scanf("%d", &num);
    if(num % 2 == 0 || num < 0) //Check the number is positive and odd
	{
		printf("Error : Please enter only positive values");
		return 0;
	}
	int **arr;
	arr= calloc (num, sizeof(int*));  //Allocate memory for array
	for ( i =0; i< num; i++ )
	{
		arr[i] = calloc (num, sizeof(int));
	}
    magic_square(arr,num); //Function call
	free(arr);
}
void magic_square(int **arr, int n)
{
	int col, row = 0, num, i;
	col = n / 2;  //To get the centre of array
    num = n * n;     //Create a n X n matrix
    for ( i = 1; i <= num; i++ )
	{
		arr[row][col] = i; 
		if (i % n == 0) //Check already has value then increase the row
		{
			row++;
		}
		else
		{
			if(row == 0) //Condition for row, if row is 0, then make row as last
			{
				row = n - 1;
			}
			else //If row is not 0, then decrement
			{
				row--;
			}
			if( col == ( n - 1 ) ) //Condition for col, if pos is in last col then move to 0th col
			{
				col = 0;
			}
			else //If col is not last then increase the col
			{
				col++;
			}
		}
	}
	for ( row = 0; row < n; row++ )  //Print the array
	{
		for ( col = 0; col < n; col++ )
		{
			printf("%3d", arr[row][col]); //%3d is to print the number in 3 spaces
		}
		printf("\n");
	}
}
