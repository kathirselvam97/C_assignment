<<Documentation
 Name             : Kathiravan s
 Date             : 24-12-2021
 Assignment no    : 1
 Assignment title : Program to check number is odd or even.
 Description      : 1)Get the value from users to check.
                    2)Check it is zero else divide by 2 and check it is even or odd.
                    3)Print the results.
 Sample input     : Enter the value of 'n' : -2
 Sample output    : -2 is negative even number
 Sample input     : Enter the value of 'n' : 2
 Sample output    : 2 is positive even number
Documentation

#include<stdio.h>
int main()  //Main function
{
	int n;  //Declare variable n
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);  //Get the value of n from user
	if (n==0)   //Check entered number is zero
	{
		printf("%d is neither odd nor even", n);
	}
	else if (n%2==0) //If number is not zero check it is completely divisible by 2
	{
		if (n > 0)  //Check if number is positive 
		{
		printf("%d is positive even number", n);
		}
		else
		{
			printf("%d is negative even number", n);
		}
	}
	else if (n > 0)  //If n is not zero or even, it must be odd number.Check number is positive 
	{
		printf("%d is positive odd number", n);
	}
	else
	{
		printf("%d is negative odd number", n);
	}
}
