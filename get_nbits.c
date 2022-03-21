/*
 Name             : Kathiravan s
 Date             : 09-01-2022
 Assignment no    : 13
 Assignment title : Get n_bits of a given number
 Description      : 1)Declare function prototype
                    2)Get the values of number and bit values from user
                    3)Call the function and do as the function definition to get the n_bits of a number
                    4)Return the results to main function
                    5)Print the results in main function
 Sample input     : Enter the number: 10
                    Enter number of bits: 3
 Sample output    : Result = 2
 
*/

#include <stdio.h>  //Header file
int get_nbits();    //Declare the function prototype of compiler doesn't recognize and gives warning
int main()          //Main function
{
	int num, n, res = 0;  
	printf("Enter num and n:");  //Prompt the number and bit values from user.
	scanf(" %d %d", &num, &n);    
	res = get_nbits(num, n);	//Call the function    
	printf("Result = %d\n", res);  //Print the result
}
int get_nbits(int num, int n)   //get_bits function starts here
{
	int res;   
	res = num & (( 1 << n ) - 1);  // 1 left shift for n times and minus 1 then and it with number and store it in variable
	return res;  //Return the value to the main function
}
