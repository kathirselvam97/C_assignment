/*
 Name             : Kathiravan s
 Date             : 03-02-2022
 Assignment title : Print the values in sorted order without modifying or copying array
 Description      : Printing patterns where number increments from left to right.
 Sample input     : Enter the size : 5
                    Enter 5 elements 
		    10 1 3 8 -1
 Sample output    : After sorting: -1 1 3 8 10
                    Original array values 10 1 3 8 -1
*/

#include <stdio.h>  //Header file

void print_sort(int *, int);  //Function prototype

int main()
{
	int size, iter;
    printf("Enter the size of the array : ");   //Declare array andi size of array
    scanf("%d", &size);
	int arr[size];
	printf("Enter the %d elements\n", size);
	for (iter = 0; iter < size; iter++)    //Read the values using loop for array
		scanf("%d", &arr[iter]);
	print_sort(arr, size);        //Call the function   
}

void print_sort(int *arr, int size)  
{
	int small = arr[0], i, j, index, index1, index2, largest = 0, sec_lar = 0;  //Declare and initialize the values
	for (i=0; i<size; i++)
	{
		if (largest < arr[i])
		{
			largest = arr[i];   //Find the largest value in array
		    index1 = i;
	     }
	}
	for(i=0; i<size; i++)
	{
		if(index1!=i && arr[i]>sec_lar)
		{
			sec_lar = arr[i];  //Find the second largest of array
		    index2 = i;
		}
	}
	for( i = 0; i < size; i++ )
	{
		if ( arr[i] < small )
		{
			small = arr[i];  //Find the smallest of array
			index = i;
		}
	}
	printf("sorted order of array is %d ");
	printf(" %d", small);   //Print the smallest element of array first
	small = arr[size - index - 1];
	for( i = 0; i < size-3; i++ )
	{
		for( j = 0; j < size; j++ ) 
		{
          if ( arr[j] < small && arr[j] != last && arr[j] != small && arr[j] != largest && arr[j] != sec_lar && arr[index] < arr[j])
		  {
			  small = arr[j];  //Find the third largest and other respectively
			  index = j;
		  }
		}
		printf(" %d", small);
			small = arr[size - index - 1 ];
	}
			printf(" %d %d", sec_lar, largest);  //Print the last two elements
}

