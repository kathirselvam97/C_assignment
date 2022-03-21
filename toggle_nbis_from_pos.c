/*
 Name             : Kathiravan s
 Date             : 14-01-2022
 Assignment title : Program to toggle 'n' bits from given position of a number
 Description      : 1) Declare function prototype.
                    2) Get the values for number, n bits and val from user as input in main function.
                    3) Call the function.
                    4) Create a mask to get n bits from position of number and invert that. 
                    5) Return the result and print it in main function.
 Sample input     : Enter the number: 10
     		    Enter number of bits: 3
 		    Enter the pos: 5
 Sample output    : Result = 50
*/

#include<stdio.h>  //Header files

int toggle_nbits_from_pos(int, int, int);  //Function prototype

int main()  //Main function
{
    int num, n, pos, res = 0;
    printf("Enter num, n and val:");  //Declare variables and read the values from user
    scanf("%d%d%d", &num, &n, &pos);			    
    res = toggle_nbits_from_pos(num, n, pos);  //Call the function
    printf("Result = %d\n", res);
    return 0;
}

int toggle_nbits_from_pos(int num, int n, int pos)  //toggle_nbits_from_posFunction 
{
	int res=0;
	res = (((1<<n)-1) << (pos-n+1)) ^ num;  //Get n bits using left shit and left shit by pos times and XOR to invert.
	return res;
}

