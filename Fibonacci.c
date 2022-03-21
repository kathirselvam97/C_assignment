/*
 Name             : Kathiravan s
 Date             : 28-01-2022
 Assignment title : Generate fibbonacci numbers using recrsion
 Description      : 1) Read the limit from the user
                    2) Check it is positive or not
                    3) Call the function with arguments
                    4) make the current value as previous and next as current
                    5) Add both values and make it as next
                    6) check condition and call the function recurseively.
 Sample input     : Enter a number: 8
 Sample output    : 0, 1, 1, 2, 3, 5, 8
*/

#include <stdio.h>  //Header file

void positive_fibonacci(int, int, int, int);  //Function prototype

void main()  //Main function
{
	int limit;   
    printf("Enter the limit : ");   //Read the limit from user
    scanf("%d", &limit);
	if(limit < 0)         //Check the limit is positive or not
	{
		printf("Invalid input\n");
		return 0;
	}
	positive_fibonacci(limit, 0, 1, 0);  //Call the function

void positive_fibonacci(int limit, int previous, int current , int next)  //Fucntion starts with arguments from main 
{
	printf(" %d,", next);    //Print the value of next
	previous = current;
	current = next;           //Swap the values
	next = previous + current;   //Add the previous and current value to get next number
	if(next <= limit)     //Check the condition and call the function recursievely
		positive_fibonacci(limit, previous, current, next);
}

