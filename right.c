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
		        res = ~(~(((1 << n) -1) & num) << (32 - n) ^ ((num >> n));  //type convert num and right sift num and xor with complement of right shift of num
					return res;   //return the res and store that in ret in main function
}

int print_bits(int ret)  //print_bits function
{
	    printf("Result :");
			for ( int i=0; i < 32; i++ )
						printf(" %d", (ret >> (31-i)) & 1);  //Print the binary bits of ret individually by loop
}

