/*
 Name             : Kathiravan s
 Date             : 31-12-2021
 Assignment no    : 10
 Assignment title : Program to count number of set bits in a number and print parity
 Description      : 1)Read the number from the user.
                    2)Use loop and get the bits one by one
                    3)Check the bit is 1 or 0
                    4)If bit is 1 then count
                    5)Check the count is odd or even and print the results
 Sample input     : Enter the number : 7
                    Number of set bits = 3
 Sample output    : Bit parity is Odd
 Sample input     : Enter the number : 15
            	    Number of set bits = 4
 Sample output    : Bit parity is Even
*/

#include <stdio.h> //Header files
int main()  //Main function
{
	int num,i,count=0;  //Declare variables
	printf("Enter the number : ");
	scanf("%d", &num);   //Read the number from user
	for ( i=0 ; i < 32 ; i++ )  //Number have 32 bits so use loop to get the binary values one by one
	{
		if ( num & (1 << i) )  //AND(&) num with 1 leftshifted for i times, if value is 1 then count 
		{
			count = count + 1;  //Add the count with 1 
		}
	}
	printf("Number of set bits = %d\n", count); 
	if ( count % 2 == 0 )    //check the count is odd or even and print
	{
		printf("Bit parity is Even\n");
	}
	else
	{
		printf("Bit parity is Odd\n");
	}
}


