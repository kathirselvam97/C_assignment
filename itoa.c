/*
 Name             : Kathiravan s
 Date             : 09-02-2022
 Assignment title : Implement itoa function
 Description      : 1) Declare variables and read the number from user
                    2) call the function
                    3) Check if number is negative then make number positive
                    4) Convert the individual digit in number and convert it as char
                    5) Use loop and reverse the string
                    6) Print the string in main function
 Sample input     : Enter the number : -1234
 Sample output    : Integer to string is -1234
*/

#include <stdio.h>  //Header file

int itoa(int , char *);  //Function prototype

int main()
{
	int num, ret;
    char str[10];
    printf("Enter the number:");  //Declare variables and read the number from user
    ret = scanf("%d", &num);  //Check scanf is successfully reads input
	if(ret == 0)
	{
		printf("Integer to string is 0"); //If scanf fails print 0.
		return 0;
	}
    itoa(num, str);  //Function call
	printf("Integer to string is %s\n", str);  //Print the string
}

int itoa(int num, char *str)  //Function declaration
{
	int rem, i=0, j, k=0, temp=0, null_point, flag = 1, num1 = num;  //Declare variables
	if(num < 0)  //Check number is negative
	{
		num=-num;  //If yes then make it positive
	}
		while ( num != 0 )  //Check the number is not zero
		{
			rem = num % 10;  //extract the last digit and store
        	str[i++] = rem + '0';   //convert the digit to char 
			num = num / 10;  //Divide num to get number except last digit
		}
	null_point=i;
	for(j = 0; j < i--; j++ )  //Use loop and reverse the string
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	str[null_point] = '\0'; //Add null at the end of string
	
	if(num1 < 0)  //If num is negative then add '-' at the front of string
 	{
		for(k = null_point; k > 0; k-- )
		{
			str[k] = str[k-1];
		}
		str[0] = '-';
		str[null_point + 1] = '\0';
	}
}


