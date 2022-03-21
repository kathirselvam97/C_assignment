/*
 Name             : Kathiravan s
 Date             : 14-01-2022
 Assignment title : Program to implement Circular right shift
 Description      : 1) Declare function prototype
                    2) Declare and read the values from user
                    3) Call the circular_right function
                    4) Create a mask to Right shift num by n times and get the shifted values to left.
                    5) Return the result to main function
                    6) Print the binary values of res using shifting operator in print_bits function.
 Sample input     : Enter num: 12
                    Enter n : 3
 Sample output    : Result : 10000000 00000000 00000000 00000001
*/

#include <stdio.h>  //Header file

int circular_right(int, int);
int print_bits(int);   //Function prototype

int main()   //Main function
{
    int num, n, ret;
    printf("Enter the num:");
    scanf("%d", &num);
    printf("Enter n:");   //Declare and read the values from user
    scanf("%d", &n);
    ret = circular_right(num, n);   //Function call statements
    print_bits(ret);
    return 0;
}

int circular_right(int num, int n)  //circular_right function
{
	int res = 0;
        res = ~(((1 << n) -1) & num) << (32 - n) ^ (num >> n);  //type convert num and right sift num and xor with complement of right shift of num
	return res;   //return the res and store that in ret in main function
}

int print_bits(int ret)  //print_bits function
{
	for ( int i=0; i < 32; i++ )
		printf("%d", (ret >> (31-i)) & 1);  //Print the binary bits of ret individually by loop
}

