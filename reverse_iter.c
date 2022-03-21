/*
 Name             : Kathiravan s
 Date             : 10-02-2022
 Assignment title : Reverse the given string using iterative method
 Description      : 1) Read the string from the user
                    2) Calculate the length of string using length function
                    3) Use loop and swap the chars using temp variable
	            4) print the reversed string in main function 
 Sample input     : Enter a string : Hello World
 Sample output    : Reverse string is : dlroW olleH
*/

#include <stdio.h>  //Header file

void reverse_iterative(char *);  //Fucntion prototype
int length(char *);

int main()
{
	char str[30];
    printf("Enter any string : ");  //Read the string from user
    scanf("%[^\n]", str);
    reverse_iterative(str);  //Function call
	printf("Reversed string is %s\n", str);  //Print the reversed string
}

void reverse_iterative(char *str)  //Function declaration
{
	int i, count = 0, temp;  //Declare variables
	count = length(str);    //Call the length function and store the length of string in count variable
	for ( i = 0; i < count--; i++ )  //Use loop and swap the chars using temp variable
	{
		temp = str[count];
		str[count] = str[i];
		str[i] = temp;
	}
}

int length(char *str)  //Length function declaration 
{
	int count = 0;
	while (*str++)
	{
		count++;  //Count how many chars in string and return it
	}
	return count;

}

