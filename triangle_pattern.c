/*
 Name             : Kathiravan s
 Date             : 09-01-2022
 Assignment no    : 07
 Assignment title : Program to print triangle pattern
 Description      : 1) Get the value from the user
                    2) Use seperate loops for rows and coloumns
                    3) Print the values according to conditions
                    4) Print the new line everytime row incremented
 Sample input     : Enter the number: 5
 Sample output    : 1 2 3 4 5
                    6       7
                    8    9
                    10 11
                    12
 */

#include <stdio.h> #Include header file
int main()  #Main function
{
	int num,row,col,temp=0;   #Declare variable
	printf("Enter the number: "); 
	scanf("%d", &num);         #Read number from user   
	for ( row = 1 ; row <= num ; row++ ) #Use loop for row
	{
		for ( col = row ; col <= num ; col++ ) #use loop for coloumn
		{
			if ( row == 1 || col == row || col == num ) #Check conditions
			{
				temp ++;
				printf("%d ", temp);   #Print the values according to the conditions
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n"); #Print the new lines
	}
}

