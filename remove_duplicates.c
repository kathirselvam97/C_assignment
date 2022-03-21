/*
 Name             : Kathiravan s
 Date             : 03-02-2022
 Assignment title : Remove duplicate elements in a given array
 Description      : 1) Read the size and elements of array from user
                    2) Call the function
                    3) Check the value from arr1 is equal to arr2
                    4) If value is not present then update the arr2
                    5) Print the arr2 in main function
 Sample input     : Enter the size: 5
                    Enter elements into the array: 5 1 3 1 5
 Sample output    : After removing duplicates: 5 1 3
*/

#include <stdio.h>  //Header file
int i, j;
void fun(int *, int, int *, int *);  //function prototype

int main()
{
	int size;
	printf("Enter the size: ");  //Read the size of array from user
	scanf("%d", &size);
	int arr1[size], new_size = 1;
	int arr2[new_size];
	printf("Enter elements into the array: ");
	for( i = 0; i < size; i++ )    //Get elements from user for array
		scanf("%d", &arr1[i]);
	arr2[0] = arr1[0];
	fun( arr1, size, arr2, &new_size );  //Call the function
	for( i = 0; i < new_size; i++ )
		printf("%d", arr2[i]);  //Print the new array
}

void fun(int *arr1, int size, int *arr2, int *new_size)
{
	int count=1, k, temp = arr1[0];
	for ( i = 0; i < size; i++ )   //Check the value in arr1 is present in arr2
	{
				for ( k = 0; k < count; k++ )
				{
					printf("%d", count);
					if ( arr1[i] == arr2[k] ) 
					{
					    temp = arr2[k];  //Check the individual value is present in arr2
                        break;
					}
				}
				if ( arr1[i] != temp)  //If not equal the update the arr2
                        arr2[count++]=arr1[i];
				}
	
	*new_size = count;
}
					


