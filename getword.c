/*
 Name             : Kathiravan s
 Date             : 09-02-2022
 Assignment title : Implement getword function
 Description      : 1) Read the strings from the user.
                    2) Call the function
                    3) Take character individually till empty space
                    4) If null encounters then increase the count value, else return count
                    5) Add the null char at the end of first word
                    6) Retrun the count and print it in main function
 Sample input     : Enter the string : Welcome to Emertxe
 Sample output    : You entered Welcome and the length is 7
*/

#include <stdio.h>  //Header file

int getword(char *str);  //Function prototype

int main()
{
	int len = 0;
    char str[100];
    printf("Enter the string : ");  //Read string from user
	scanf(" %[^\n]", str);
  	len = getword(str);  //Function call
	printf("You entered %s and the length is %d\n", str, len);  //Print the result
}

int getword(char *str)
{
	int count=0, i;  //Declare variables
	for ( i = 0; str[i] != ' '; i++ )  //Take character individually till empty space
	{
		if(str[i] != '\0')   //If null encounters then increase the count value
		count++;
		else
			return count;  //Else return count
	}
	str[i]='\0';  //Add the null char at the end of first word
	return count;  //Return the count value
}

