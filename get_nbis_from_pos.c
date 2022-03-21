/*
 Name             : Kathiravan s
 Date             : 14-01-2022
 Assignment title : Program to get 'n' bits from given position of a number
 Description      : 1) Declare function prototype.
                    2) Declare variables in main function and get the number, bits and position from user.
                    3) Call the function.
                    4) Create a mask to fetch n number of bits from given position of num.
                    5) Display the result after masking.
 Sample input     : Enter the number: 12
    		    Enter number of bits: 3
		    Enter the pos: 4
 Sample output    : Result = 3
*/

#include <stdio.h>   //Header files

int get_nbits_from_pos(int, int, int);  //Specify function prototype

int main()  //Main function
{
    int num, n, pos, res = 0;
    printf("Enter num, n and val:");
    scanf("%d%d%d", &num, &n, &pos);           //Declare variables and read values from user
    res = get_nbits_from_pos(num, n, pos);    //Function call
    printf("Result = %d\n", res);  
    return 0;
}

int get_nbits_from_pos(int num, int n, int pos)  //get_nbits_from_pos function
{
	int res=0;
	res = (((1<<n)-1) <<( pos-n+1) & num) >> (pos-n+1); //left shift 1 and left shift to position times and right shift by position times and & with num.
	return res;   //Return the result to main function print there.
}
