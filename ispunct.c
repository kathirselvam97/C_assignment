/*
 Name             : Kathiravan s
 Date             : 18-01-2021
 Assignment title : Write a program to implement your own ispunct() function
 Description      : 1) Prompt the user and read a character
                    2) Call the function
                    3) Check the character is alphanum or space using ascii values and return the value respectively
                    4) Print the results accordingly in main function
 Sample input     : Enter the character: a
 Sample output    : Entered character is not punctuation character
 Sample input     : Enter the character:$
 Sample output    : Entered character is punctuation character	
*/


#include <stdio.h>  //Header file

int my_ispunct(int);  //Function prototype

int main()  //Main function
{
    char ch;
    int ret; 
    printf("Enter the character:");  //Prompt the user to enter a char  
    scanf("%c", &ch);
    ret = my_ispunct(ch);  //Function call
    ret == 0 ? printf("Entered character is not punctuation character") : printf("Entered character is punctuation character");//If ret is 0, then print char is not punctuation char else is punctuation char
}

int my_ispunct(int ch)  //my_ispunct function starts
{
    if(ch == 32 || (ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >=97 && ch <= 122)) //Check char is either alpha num or space and return the value accordingly
    {
	return 0;
    }
    else
    {
	return 1;
    }
}
