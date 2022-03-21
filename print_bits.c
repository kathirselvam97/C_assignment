/*
 Name             : Kathiravan s
 Date             : 14-01-2022
 Assignment title : Program to print 'n' bits from LSB of a number
 Description      : 1) Declare the function prototype.
                    2) Get the number from user in main function and call the function.
                    3) Print n number of bits of num from LSB. 
 Sample input     : Enter the number: 10
                    Enter number of bits: 12
 Sample output    : Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0
*/

#include <stdio.h>  //Header files

int print_bits(int, int);  //Declare the dunction prototype

int main()  //Main function
{
    int num, n;
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);     //Declare the variables and get the values from user
    printf("Binary form of %d:", num);
    print_bits(num, n);  //Function call
    return 0;
}

int print_bits(int num, int n)  //print_bits function
{
	for (int i = 1; i <= n; i++)
	{
	printf("%d", ((num >> (n - i)) & 1));  //Print the bits in binary form one by one using the loop by right shifting till end
	}
}
