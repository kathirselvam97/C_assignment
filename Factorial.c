/*
 Name             : Kathiravan s
 Date             : 28-01-2022
 Assignment title : Find factorial of given number using recursion
 Description      : 1) Read the number from the user
                    2) Check it is positive or not
                    3) If entered number is zero then print factorial is 1
                    4) multiply the num with fact and store in fact
                    5) Also decrement number
                    6) call the function recursievly and print the result
 Sample input     : Enter the value of N : 7
 Sample output    : Factorial of the given number is 5040
*/

#include <stdio.h>  //Header file

int main()  //Main function
{
	static int num=0;  //Declare static variable
        static unsigned long long int fact = 1;  
	if( num == 0 )     //Check the number is zero and get the value from user
	{
	printf("Enter the value of N : ");
	scanf("%d", &num);
	}

	if(num < 0)    //If number is negative then print error
	{
		printf("Invalid Input\n");
		return 0;
	}
	else if( num == 0 )  
	{
		printf("Factorial of the given number is 1\n");
		return 0;
	}
	fact = fact * num;  //Multiply number and factorial value and decrement number
	num--;
	if(num > 1)
	main();   //Call the main function recurseively and calculate the factorial 
	else
		printf("Factorial of the given number is %lld\n", fact); 
}
