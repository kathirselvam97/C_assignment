/*
 Name             : Kathiravan s
 Date             : 31-12-2021
 Assignment no    : 6
 Assignment title : Print numbers in X format
 Description      : 1)Read the number from user.
                    2)Use seperate loops for rows and coloumns
                    3)Check the conditions
                    4)Print the result
 Sample input     : Enter the number: 5
 Sample output    : 1   5
                     2 4
                      3
                     2 4
                    1   5
 */

#include<stdio.h>  //Header files
int main()        //Main function
{
	int num,i,j;  //Declare variables
	printf("Enter the number: ");  //prompt user to enter the number
	scanf("%d", &num);
	for ( i=1; i <= num; i++ )   //loop for rows 
	{
		for ( j=1; j <= num; j++ )  //loop for coloumns
		{
			if ( i == j || (i + j) == (num + 1))  //If i and j are equal or there sum is equal to num + 1
			{
				printf("%d", j);  //If so print the value of coloumn
			}
			else
			{
				printf(" ");  //If condition fails print empty space
			}
		}
		printf("\n");  //Print the new line
	}
}
