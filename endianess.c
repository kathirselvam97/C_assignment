/*
 Name             : Kathiravan s
 Date             : 25-02-2022
 Assignment title : Convert Little Endian data to Big Endian
 Description      : 1) Read the size from user
                    2) Check the size and make the variable as short or int
                    3) Get the value as hexadecimal 
                    4) Swap the bits and print it
 Sample input     : Enter the size: 2
		    Enter any number in Hexadecimal: ABCD
 Sample output    : After conversion CDAB
*/

#include<stdio.h>  //Header file
int main()
{
	int size, res;
	printf("Enter the size: ");  //Read the size from user
	scanf("%d", &size);
	if(size == 2)  
	{
		short val;  //If size is 2 then declare value as short
		int temp=0;
		printf("Enter any number in Hexadecimal: ");
		scanf("%hx", &val);   //Get the value of short 
		char *p = (char *)&val;  //Assign that to the character pointer
		temp = p[0];
		p[0] = p[1];  //Swap the bits and print it
		p[1] = temp;
		printf("After conversion %hx\n", val);
	}
	if(size == 4)
	{
		int val, temp = 0, i;
		printf("Enter any number in Hexadecimal: ");  //If size is 4 then declare value as int
		scanf("%x", &val);  //Get the value in hexadeciaml 
		char *p = (char *)&val;  //Assign the value to the character pointer
		for (i = 0; i < 2; i++ )
		{
			temp = p[size-1];  //Swap the bits and print it
			p[size-1] = p[i];
			p[i] = temp;
			--size;  
        }
		printf("After conversion %x\n", val);
	}
}
