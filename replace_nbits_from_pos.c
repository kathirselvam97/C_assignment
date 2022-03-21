/*
 Name             : Kathiravan s
 Date             : 14-01-2022
 Assignment title : Program to put the (b-a+1) lsb’s of num into val[b:a]
 Description      : 1) Declare function prototype.
                    2) Declare the variables and get the values from user in main function.
                    3) Call the function.
                    4) Calculate no of bits by using the given formula.
                    5) Create a mask get No_of_bits from num and replace No_of_bits from given postion of val.
                    6) Retrun the result to the main function and print result. 
 Sample input     : Enter the value of 'num' : 11
                    Enter the value of 'a' : 3
                    Enter the value of 'b' : 5
		    Enter the value of 'val': 174
 Sample output    : Result : 158
*/

#include <stdio.h>  //Header files

int replace_nbits_from_pos(int, int, int, int);  //Function prototype

int main()  //Main function
{
    int num, a, b, val, res = 0;
    printf("Enter num, a, b, and val:");  //Declare the variables and read the values from user
    scanf("%d%d%d%d", &num, &a, &b, &val);
    res = replace_nbits_from_pos(num, a, b, val);  //Call the function
    printf("Result = %d\n", res);
    return 0;
}

int replace_nbits_from_pos(int num, int a, int b, int val)  //Function prototype
{
    int res=0;
    int No_of_bits = b - a + 1;  //Calculate no.of.bits 
    if (a <= b <=31 )
    {
    res = ((((1<<(No_of_bits))-1) & num) << (No_of_bits)) | ~(((1<<No_of_bits)-1) << (No_of_bits)) & val ;  //Get bits from num using left shift and replace bits from the position using XOR operator
    return res;  //return res and print the result in main function
    }
}
