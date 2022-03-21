/*
 Name             : Kathiravan s
 Date             : 25-02-2022
 Assignment title : Variance calculation with dynamic arrays
 Description      : 1) Read the values from user
                    2) Allocate the memory dynamically
                    3) Get the values for array
                    4) call the functions and add the values 
                    5) Calculate mean by dividing sum of x to the size
                    6) Calculate the D by subracting x with mean
                    7) Square the D and add those
                    8) Divide the sum of square(D) to size
                    9) Return the value and print in main function
                    10) Free the dynamically allocated memory
 Sample input     : Enter the no.of elements : 10
		    Enter the 10 elements:
                    [0] -> 9
                    [1] -> 12
                    [2] -> 15
                    [3] -> 18
                    [4] -> 20
                    [5] -> 22
                    [6] -> 23
                    [7] -> 24
                    [8] -> 26
                    [9] -> 31
 Sample output    : Variance is 40.000000  
*/

#include <stdio.h>
#include<stdlib.h>  //Header file

float variance(int *, int);  //Function prototype

int main()
{
	int n, i;
	float res;
	printf("Enter the no.of elements : ");  //Read the values from user
	scanf("%d", &n);
	int *arr = malloc ( n * sizeof(int)); //Get the memory for variables using malloc
    printf("Enter the 10 elements:\n");
	for( i = 0; i < n; i++ )
	{
		printf("[%d] -> ", i);  //Get the values for array
		scanf("%d", &arr[i]);
	}
	res = variance(arr, n);  //Call the function
	printf("Variance is %f\n", res);
	free(arr);  //Free the dynamically allocated memory
}

float variance(int *arr, int n)  
{
	int sum=0, i, mean, dev, d_sq = 0;
	float sigma;   //Declare varaibles
	for( i = 0; i < n; i++ )
	{
		sum += arr[i];  //Add the values
	}
    mean = sum / n;  //Find sum 
	for ( i = 0; i < n; i++ )
	{
		dev = arr[i] - mean;
		d_sq += (dev * dev);
	}
    sigma = (float) d_sq / n;  //Find variance by type casting
	return sigma;
}
	
