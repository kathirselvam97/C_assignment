/*
 Name             : Kathiravan s
 Date             : 18-01-2021
 Assignment title : Write a program to implement your own isalnum() function
 Description      : 1) Prompt the user and read a character
                    2) Call the function
                    3) Check the character is number or alphabets using ascii values and return the value respectively
                    4) Print the results accordingly in main function
 Sample input     : Enter the character: a
 Sample output    : The character 'a' is an alnum character.
 Sample input     : Enter the character: ?
 Sample output    : The character '?' is not an alnum character.	
*/

#include <stdio.h>   //Header file

int my_isalnum(int);  //Function prototype

int main()  //Main function
{
    char ch;
    int ret;
    printf("Enter the character:");  //Prompt the user to enter a character
    scanf("%c", &ch);
    ret = my_isalnum(ch);  //Fucntion call
    ret == 0 ? printf("The character '%c' is an alnum character.", ch) : printf("The character '%c' is not an alnum character.", ch);  //Print char is alnum when ret is 0,else print not
}

int my_isalnum(int ch)  //my_isalnum Function starts
{
	if((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))  //Check char is alpha or num if yes return 0 or return 1
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

