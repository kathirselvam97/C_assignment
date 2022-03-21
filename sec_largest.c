/*
 Name             : Kathiravan s
 Date             : 21-01-2022
 Assignment title : Program to find 2nd largest element in an array
 Description      : 1) Read the size of array and get the elements from user
                    2) Call the function with array and size as arguments
                    3) Compare elements in array and store the largest in variable
                    4) Ignore the largest and find the next largest and return the value
                    5) Print the number in main function
 Sample input     : Enter the size of the Array : 5
                    Enter the elements into the array: 5 1 4 2 8
 Sample output    : Second largest element of the array is 5
*/

#include <stdio.h>  //Header file

int sec_largest(int *, int);  //Function prototype

int main()  //Main function
{
    int size, ret;
    printf("Enter the size of the array :");  //Declare vairables and get the size of array
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements into the array: ");
    for( int i = 0; i < size; i++ )  //Get the elements for array
	scanf("%d", &arr[i]);
    ret = sec_largest(arr, size);  //Function call
    printf("Second largest element of the array is %d\n", ret);  //Print the second largest value which get from another function 
}

int sec_largest(int *arr, int size)  //sec_largest function
{   
        //To find the largest
	int max=arr[0],i,index,max1=arr[0];  //Declare variables and assign first value as maximum
	for ( i = 0; i < size; i++ )   
	{
		if (arr[i] >= max)   //Use loop and check values in array is greater then maximum variable
		{
			max=arr[i];  //Update max variable and store the index number in variable
			index=i;
		}
	}
        //To find the second largest
	if ( index == 0 )  //If index is zero then make max1 to 2 element of array
	{
		max1=arr[1];
	}
	for ( i = 0; i < size; i++ )
	{
		if (arr[i] >= max1 & i != index)  //Use loop and check element is greater then max1 and value not equal to largest
		{
			max1=arr[i];  //Update the variable
		}
	}
	return max1;
}


