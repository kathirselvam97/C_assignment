/*
 Name             : Kathiravan s
 Date             : 14-01-2021
 Assignment title : replace_nbits.c
 Description      : 1) Declare variables and get the values from user.
                    2) call the replace_nbits function
                    3) Create a mask to fetch n number of bits from val from LSB side
                    4) create a mask to replace that bits in num
                    5) OR both the mask and return the result 
 Sample input     : Enter the number: 10
                    Enter number of bits: 3
           	    Enter the value: 12
 Sample output    : Result = 12
*/

#include<stdio.h>  //Header files

int replace_nbits(int, int, int);  //Function prototype

int main()  //Main function
{
	int num, n, val, res = 0;
	printf("Enter num, n and val:");  //Declare variables and read the input from user
	scanf("%d%d%d", &num, &n, &val);
	res = replace_nbits(num, n, val); //Function call
	printf("Result = %d\n", res); 	
	return 0;
}
int replace_nbits(int num, int n, int val)  //replace_nbits function
{
	int res=0;
	res = val & ((1<<n)-1) | (num & (~((1<<n)-1)));  //Get the n bits from lsb of val and (|) it with num
	return res;  //return the result
}
