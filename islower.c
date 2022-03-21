/*
 Name             : Kathiravan s
 Date             : 18-01-2021
 Assignment title : Write a program to implement your own islower() function
 Description      : 1) Prompt the user and read a character
                    2) Call the function
                    3) Check the character is in lower case using ascii values and return the value respectively
                    4) Print the results accordingly in main function
 Sample input     : Enter the character: a
 Sample output    : Entered character is lower case alphabet
 Sample input     : Enter the character:3  
 Sample output    : Entered character is not lower case alphabet	
*/

#include <stdio.h>  //Header file

int my_islower(int);  //Function prototype

int main()   //Main function
{
    char ch;
    int ret;
    printf("Enter the character:");  //Prompt the user to enter a character
    scanf("%c", &ch);
    ret = my_islower(ch);  //Fucntion call
    ret == 0 ? printf("Entered character is lower case alphabet") : printf("Entered character is not lower case alphabet");  //If ret is 0, then print char is lower case else not lower case
}

int my_islower(int ch)  //my_islower function starts
{
    if (ch >= 97 && ch <=122)  //Check if entered char is lower using ascii value and return the number accordingly
    {
	return 0;
    }
    else
    {
	return 1;
    }
}
