<<Documentation
 Name             : Kathiravan s
 Date             : 24-12-2021
 Assignment no    : 3
 Assignment title : Program to generate negative fibonacci series
 Description      : 1)Read value from the user
                    2)store first and second value of series in a variable
                    3)Use loop to generate series
                    4)Swap and subtract the values to generate series
 Sample input     : Enter a number: -8
 Sample output    : 0, 1, -1, 2, -3, 5, -8
 Sample input     : Enter a number: -21	
 Sample output    : 0, 1, -1, 2, -3, 5, -8, 13, -21
Documentation

#include<stdio.h>
int main()  //Main function
{
	int N;  //declare N as integer
	printf("Enter a number: ");
	scanf("%d", &N);  //Read N value from user
	int first=0; //Store the first digit of series in a variable
	int second=1; //store the sceond digit of series
	int next=0;
	while (N <= next && N <= -next) //Check Value of N is greater then or equal to next and also greater then (negative)next
	{
		printf("%d ", next); //Print the next value
		first=second;   //swap the second variable to first
		second=next;    //Assign next value to second
		next=first-second; //Add first and second and store that in next
	}
}


