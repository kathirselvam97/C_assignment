/*
 Name             : Kathiravan s
 Date             : 09-01-2022
 Assignment no    : 11
 Assignment title : print all primes using Sieve of Eratosthenes method
 Description      : 1)Get the array size and values from user
                    2)Check if number is greater then 1 and less then 2^20
                    3)Use math header files to use pow function
                    4)Use loop and get the array values and check it is prime or not
                    5)If not prime then assign it as zero
                    6)Now print the non zero values from the array
 Sample input     : Enter the value of 'n' : 20
 Sample output    : The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/

#include<stdio.h> 
#include<math.h>  //Header files 
int main()   //Main function
{
	int n,i,j;  //Declare variables
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);   //Get value from the user
	int arr[n];   //Dclare array
	if ( n > 1 && n < ((int) pow(2,20)) )  //Check if n is great then 1 and less then 2^20
 	{
		for ( i = 2; i < n; i++ )  
		{
			 arr[i]=i;       //Get the values for array using loop
		}
		for ( i = 2; i < n; i++ )
		{ 
			for ( j = 2; j < arr[i]; j++ )  //Use loop and check j value is lesser then array digit one by one
			{
				if ( arr[i] % j == 0 ) //Check if array number is divisible by other number
				{
					arr[i]=0;  //if divisible then make it zero
				}
			}
		}
		printf ("The primes less than or equal to %d are : ", n); 
		for ( i = 2; i < n; i++ )  //Use loop to print values from array
		{
			if ( arr[i] )  //Check if value from array is not zero 
			{
				printf ("%d,", arr[i]); //If not zero, print the numbers
			}
		}
	}
	else
	{
		printf("Please enter a positive number which is > 1\n");
	}
	return 0;
}
				

					



