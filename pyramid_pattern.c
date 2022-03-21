/*
 Name             : Kathiravan s
 Date             : 09-01-2021
 Assignment no    : 08
 Assignment title : Printing pyramid pattern
 Description      : 1) Get the value from the user
                    2) Use seperate loops for rows and coloumns
                    3) Print the values according to conditions
                    4) Print the new line everytime row incremented
                    5) Use 2 different loops and print upper and lower triangle seperately
 Sample input     : Enter the number: 5
 Sample output    : 5
                    4 5
                    3 4 5
                    2 3 4 5
                    1 2 3 4 5
                    2 3 4 5
                    3 4 5
                    4 5
                    5

*/

#include<stdio.h> //Include header files
int main()  //Main function
{
	int num,row,col;  //Declare variables
	printf("Enter the number: "); 
	scanf("%d", &num);          //Read number from the user
	for ( row = num; row >= 1; row-- ) //Use loop for rows 
	{
		for ( col = row; col <= num; col++ ) //use loop for coloumns
		{
			printf("%d", col); //print the colomun value
		}		
		printf("\n");
	}
	for ( row = 2; row <= num; row++ ) //Use loop for rows 
	{
		for ( col = row; col <= num; col++ ) //Use loop for coloumns
		{
			printf("%d", col);  //Print the coloumns
		}
		printf("\n");
	}
}



