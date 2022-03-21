<<Documentation
 Name             : Kathiravan s
 Date             : 24-12-2021
 Assignment no    : 4
 Assignment title : Program to check number is perfect or not
 Description      : 1)Get the value from user to check it is perfect number
                    2)Check the value is positive and find its divisors
                    3)Add all the divisors and except that number
                    4)If sum of divisors is equal to the entered number print it is perfect number
 Sample input     : Enter a number: 6	
 Sample output    : Yes, entered number is perfect number
 Sample input     : Enter a number: 10
 Sample output    : No, entered number is not a perfect number
Documentation

#include<stdio.h>
int main()  //Main function
{
	int N,divisors=0,i; 
	printf("Enter a number: ");
	scanf("%d", &N);  //Prompt the user to enter N value  
	if ( N > 0 )   //Check N is negative
	{
		for (i=1;i<N;i++)   //Use loop to divide the N from 1.
		{
			if (N%i==0)  //Check the number is fully divisible 
			{
				divisors=divisors+i;  //Add the divisors with previous one
			}
		}
			if (divisors==N)  //Check if the divisors is equal to N to check it is perfect number
	        {
		    printf("Yes, entered number is perfect number\n");
	        }
	        else
	        {  
	 	    printf("No, entered number is not a perfect number\n");
	        }
	}
	else
	{
		printf("Error : Invalid Input, Enter only positive number\n");  //If user entered negative value print error
	}
}
