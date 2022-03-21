/*
 Name             : Kathiravan s
 Date             : 18-01-2021
 Assignment title : Write a program to implement your own isblank() function
 Description      : 1) Prompt the user and read a character
                    2) Call the function
                    3) Check the character is space or tab using ascii values and return the value respectively
                    4) Print the results accordingly in main function
 Sample input     : Enter the character: a
 Sample output    : The character 'a' is not a blank character.
 Sample input     : Enter the character:   
 Sample output    : The character ' ' is a blank character.	
*/

#include <stdio.h>  //Header file

int my_isblank(int);  //Function prototype

int main()  //Main function
{
    char ch;
    int ret;
    printf("Enter the character:");  //Prompt the user to enter a character
    scanf("%c", &ch);
    ret = my_isblank(ch);  //Function call
    ret == 0 ? printf("The character '%c' is a blank character.", ch) : printf("The character '%c' is not a blank character.", ch);  //if ret is 0, then print char is blank else print not a blank char
}

int my_isblank(int ch)  //my_isblank function starts
{
    int res=0;
    if (ch == 9 || ch == 11 || ch == 32)  //Check if char is space or tab, and return values accordingly
    {
        return 0;
    }
    else
    {
	return 1;
     }
}
