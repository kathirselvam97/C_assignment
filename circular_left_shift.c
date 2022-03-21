/*
 Name             : Kathiravan s
 Date             : 14-01-2021
 Assignment title : Program to implement Circular left shift
 Description      : 1) Declare function prototype.
                    2) Declare variables and get input from the user
                    3) Call the circular_left function
                    4) n bits is taken from num and Type cast num and change the bits at start
                    5) Return res and print the number in binary using bit wise operator in print_bits function
 Sample input     : Enter num: 12
                    Enter n : 3
 Sample output    : Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include <stdio.h>  //include header file

int circular_left(int, int);  //Declare function prototype
int print_bits(int);

int main()   //Main function
{
    int num, n, ret;
    printf("Enter the num:");
    scanf("%d", &num);
    printf("Enter n:");        //Declare variables and get input from the user
    scanf("%d", &n);
    ret = circular_left(num, n);  //Function call statements
    print_bits(ret);
    return 0;
}

int circular_left(int num, int n)  //circular_left function
{
	int res = 0;
	res = ((unsigned) num >> (32 - n)) | (num << n);  //Type cast (num) to unsigned and right shift and or(|) with n times left shifted num 
	return res;  //return the res and it is stored in ret in main function
}

int print_bits(int ret)  //print_bits function
{
	for ( int i = 0; i < 32; i++ )
	printf("%d", (ret >> (31 - i)) & 1);  //Use loop and print the binary values
}


