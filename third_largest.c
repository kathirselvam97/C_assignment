/*
 Name             : Kathiravan s
 Date             : 21-01-2022
 Assignment title : Program to find 3rd largest element in an array.
 Description      : 1) Read the size of array and get the elements from user
                    2) Call the function with array and size as arguments
                    3) Compare elements in array and store the largest in variable
                    4) Ignore the largest and find the next largest 
                    5) Similarly ignore both largest and second largest and find the third largest and return the value
                    5) Print the number in main function
 Sample input     : Enter the size of the Array : 5
                    Enter the elements into the array: 5 1 4 2 8
 Sample output    : Second largest element of the array is 4
*/


#include <stdio.h>  //Header file

int third_smallest(int *, int);  //Function prototype

int main()  //Main function
{
	int size, ret;
	printf("Enter the size of the array :");  //Declare vairables and get the size of array 
	scanf("%d", &size);
	int arr[size];
	printf("Enter the elements into the array: ");
	for(int i =0; i < size; i++)  //Get the elements for array
		scanf("%d", &arr[i]);
	ret = third_smallest(arr, size);
	printf("Third largest element of the array is %d\n", ret);  //Print the second largest value which get from another function
}

int third_smallest(int *arr, int size)  //third_smallest function
{
	//To find largest number
	int max=arr[0],i,index;        //Declare variables and assign first value as maximum
	for ( i = 0; i < size; i++ ) 
	{
		if (arr[i] >= max)    //Use loop and check values in array is greater then maximum variable
		{
			max=arr[i]; //Update max variable and store the index number in variable
			index=i;
		}
	}
	//To find second largest
	int max1=arr[0],index1;
	if ( index == 0 )   //If index is zero then make max1 to 2 element of array
	{
	    max1=arr[1];
	}
	for ( i = 0; i < size; i++ )
	{
		if (arr[i] >= max1 & i != index)  //Use loop and check element is greater then max1 and value not equal to largest
		{
			max1=arr[i];  //Update the variable and store the index number of second largest variable
			index1=i;
		}
	}
	//To find third largest
	int max2=arr[0];
	if ((index == 0||index == 1) && (index1 == 0||index1 == 1))  //Check if largest and second largest are either 1 or 2 element in array
	{
		max2=arr[2];  //Assign the max2 variable to 3 element of array
	}
	else
	{
		max2=arr[1];  //Else assign 2 element to max2 variable
	}
    for( i = 0; i < size; i++ ) 
	{
		if (arr[i] >= max2 & i != index & i != index1)  //Use loop and check element is greater then max1 and value not equal to largest and secomd largest
		{
			max2=arr[i];  //Update the max2 variable
		}
	}
	return max2;
}
