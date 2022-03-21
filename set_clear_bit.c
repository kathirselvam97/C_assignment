/*
 Name             : Kathiravan s
 Date             : 31-12-2021
 Assignment no    : 11
 Assignment title : To Check Nth bit is set or not, if yes clear the Mth bit 
 Description      : 1)Read the number, Nth bit and Mth bit from the user.
                    2)Check if Nth bit is set or not.
                    3)If Nth bit is set then clear the Mth bit and update the value.
                    4)Else print the value as it is.
 Sample input     : Enter the number: 19
                    Enter 'N': 1
                    Enter 'M': 4
 Sample output    : Updated value of num is 3 
 Sample input     : Enter the number: 19
                    Enter 'N': 2
                    Enter 'M': 4
 Sample output    : Updated value of num is 19 
*/

#include<stdio.h>  //Header files
int main()    //Main function
{
	int num,N,M,result; //Declare variables
	printf("Enter the number: ");
	scanf("%d", &num);     //Read the number from user
	printf("Enter 'N': ");
	scanf("%d", &N);       //Read Nth bit position from user
	printf("Enter 'M': ");
	scanf("%d", &M);       //Read Mth bit position to clear 
	if ( num & (1 << N ) ) //Check value of num AND(&) with 1 left shifted to N times gives 1.If 1 then bit is set
	{
		result = num & ~( 1 << M );  //AND(&) num with complement of (1 left shited to M times) to clear the bit and update the value
		printf("Updated value of num is %d ", result);  //Print the result
	}
	else
	{
		printf("Updated value of num is %d ", num);  //If Nth bit is not set then print the same value
	}
}

	 
		

