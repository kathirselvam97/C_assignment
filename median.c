/*
 Name             : Kathiravan s
 Date             : 09-01-2022
 Assignment no    : 12
 Assignment title : Find median of unsorted arrays
 Description      : 1)Get the array size and values from user
                    2)Sort the arrays seperately and check the array size is odd or even
                    3)If size is odd, get the middle element or get two middle numbers and find its average
                    4)Atlast find the average of two arrays 
 Sample input     : Enter the 'n' value for Array A: 5
                    Enter the 'n' value for Array B: 5
		    Enter the elements one by one for Array A: 3 2 8 5 4
                    Enter the elements one by one for Array B: 12 3 7 8 5
 Sample output    : Median of Array1 : 4
                    Median of Array2 : 7
                    Average of 2 medians : 5.5   
 Sample input     : Enter the 'n' value for Array A: 5
                    Enter the 'n' value for Array B: 4
		    Enter the elements one by one for Array A: 3 2 8 5 4
		    Enter the elements one by one for Array B: 12 13 7 5
 Sample output    : Median of array1 : 4
		    Median of array2 : 9.5                                      
		    Average of 2 medians : 6.75  
*/

#include <stdio.h> //Header file
int main()  #Main function
{
	int n1,n2,i,j,temp,result;
	float median_A,median_B;     //Declare variables

	printf("Enter the 'n' value for Array A: ");
	scanf("%d", &n1);                               //Prompt the array sizes from the user 
	printf("Enter the 'n' value for Array B: ");
	scanf("%d", &n2);

	int arr_A[n1],arr_B[n2];         //Declare the arrays

	printf("Enter the elements one by one for Array A: ");
	for ( i=0; i < n1; i++ )
		scanf("%d", &arr_A[i]);       //Get the values for arrays from user
	printf("Enter the elements one by one for Array B: ");
	for ( j=0; j < n2; j++ )
		scanf ("%d", &arr_B[j]);

	for ( i=0; i < n1; i++)
	{
		for ( j = i+1; j < n1 ; j++)
		{
			if ( arr_A[i] > arr_A[j] ) //swap and sort the arrays in ascending order
			{
				temp = arr_A[i];
				arr_A[i] = arr_A[j];
				arr_A[j] = temp;
			}
		}
	}
	if ( n1 % 2 == 0 )    //Check array size is odd or even
        {
		result = n1 / 2;   //If even then add the middle two numbers and divide it by 2
		median_A = (float) (arr_A[result] + arr_A[result-1])/2;
        printf ("Median of array1 : %g\n", median_A);
	}
	else
	{
		result = n1 / 2;          //If odd then get the middle value of the array
		median_A = arr_A[result];
		printf ("Median of array1 : %g\n", median_A);
	}

	for ( i=0; i < n2; i++)
	{
		for ( j = i+1; j < n2 ; j++)
		{
			if ( arr_B[i] > arr_B[j] )   //swap and sort the arrays in ascending order
			{
				temp = arr_B[i];
				arr_B[i] = arr_B[j];
				arr_B[j] = temp;
			}
		}
	}
	if ( n2 % 2 == 0 )     //Check array size is odd or even
	{
		result = n2 / 2;   //If even then add the middle two numbers and divide it by 2
		median_B = (float) (arr_B[result] + arr_B[result-1])/2;
        printf ("Median of array2 : %g\n", median_B);
	}
	else
	{
		result = n2 / 2;
		median_B = arr_B[result];   //If odd then get the middle value of the array
		printf ("Median of array2 : %g\n", median_B);
	}

 printf ("Median of both arrays : %g\n", (median_A + median_B)/2 );  //Add the median of both arrays and divide it by to find average median of both arrays
}
