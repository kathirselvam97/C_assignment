/*
 Name             : Kathiravan s
 Date             : 10-02-2022
 Assignment title : Reverse the given string using recursive method
 Description      : 1) Read the string from the user
                    2) Calculate the length of string using length function
                    3) swap the chars using temp variable
                    4) Check the condition and call the function recursievely
	            4) print the reversed string in main function 
 Sample input     : Enter a string : Hello World
 Sample output    : Reverse string is : dlroW olleH
*/

#include <stdio.h>  //Header file

void reverse_recursive(char *, int , int );  //Function prototype
int length(char *);

int main()
{
	char str[30];
	int len, ind = 0;
    printf("Enter any string : ");  //Declare variables and read the string from the user
	scanf("%[^\n]", str);
	len = length(str);   //Call length function and store the length of string in len variable
    reverse_recursive(str, ind, len);  //Function call
	printf("Reversed string is %s\n", str);  //Print the reversed string
}

int length(char *str)  //Fucntion definition
{
	int count=0;
	while(*str++)
	{
		count++;  //Count how many chars in string and return
	}
	return count;
}

void reverse_recursive(char *str, int ind, int len)  //fucntion call
{
	int temp;
	temp = str[--len];  //Swap the chars in string using temp variables
	str[len] = str[ind];
	str[ind] = temp;
	ind++;
	if (ind < len)  //Check the condition and call the function recursievely with updated value
	{
		reverse_recursive(str, ind, len);
	}
}
 
