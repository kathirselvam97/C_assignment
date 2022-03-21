/*
 Name             : Kathiravan s
 Date             : 18-02-2022
 Assignment title : check given string is Pangram or not
 Description      : Printing patterns where number increments from left to right.
 Sample input     : Enter the string: The quick brown fox jumps over the lazy dog
 Sample output    : The Entered String is a Pangram String
*/

#include <stdio.h>  //Header files

int pangram(char *);  //Function prototype

int main()
{
	char str[100];
	printf("Enter the string: ");  //Read sthe string from user
	scanf("%[^\n]", str);
    pangram(str);     //Call the function
}

int pangram(char *str)  
{
	char alpha[26]={0};  //Declare an array of 26 elements with full of 0
	int i, count=0;
	for( j = 0; str[j] != '\0'; j++ ) //get the char one by one till end of string
	{
		if( str[j] >= 'a' && str[j] <= 'z' )  //Check the string is an lower case alphabet
		{
			count+= !alpha[str[j] - 'a'];  //Subtract with 'a' to get the index number or position of the albhabet 
		    alpha[str[j] - 'a'] = 1;  //Make the zero at the index to 1
	    }
 	    else if ( str[j] >= 'A' && str[j] <= 'Z' )  //Check the string is an upper case alphabet
	    {
			count+= !alpha[str[i] - 'A']; //Subtract with 'a' to get the index number or position of the albhabet
		    alpha[str[j] - 'A'] = 1;  //Make the zero at the index to 1
	    }
    }
	if(count == 26)  //If the value of count is 26 then surely alphas are present in string so print it as pangram
		printf("The Entered String is a Pangram String\n");
	else
		printf("The Entered String is not a Pangram String\n");
}
