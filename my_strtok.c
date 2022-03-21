/*
 Name             : Kathiravan s
 Date             : 15-02-2022
 Assignment title : Implement strtok function
 Description      : 1) Declare variables and read the strings from user
                    2) Call the function
                    3) Check the string contain delimiter
                    4) If yes then make it as null and return 
                    5) Update the string and store that in another variable
                    6) Continue till end of string
 Sample input     : Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
                    Enter string2 : ;./-:
 Sample output    : Tokens :
		    Bangalore
		    Chennai
		    Kolkata
		    Delhi
		    Mumbai
 
*/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>     //Header file

char *my_strtok(char *, char *);
unsigned int delimiter (char, char *);  //Function prototype

static int j = 0;
int main()   //Main function
{
	char str[50], delim[50];
	printf("Enter the string  : ");  //Declare variable and read the strings from user
    scanf("%s", str);
    __fpurge(stdout);                     //Clear the output buffer
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
    char *token = my_strtok(str, delim);  //Function call
    printf("Tokens :\n");
    while (token)
	{
		printf("%s\n", token);
        token = my_strtok(NULL, delim);
	}
}

char *my_strtok(char *str, char *delim)  //Function definition
{
	static char *ptr;
	if(!str)    //If string is present store that in new variable(starts from second)
	{
		str = ptr;  
	}
	if(!str)  //If string is not present return null
	{
		return NULL;
	}
	while(1)  //Beginning of the string contain delimiter 
	{
		if(delimiter(*str, delim))  //Check for delimiter at start
		{
			str++;
			continue;
		}
		if(*str == '\0')  //Reached end of the string simply return null
		{
			return NULL; 
		}
			break;
	}
	char *ret = str;  //Store the base address of string in ret
	while(1)
		{
			if(*str == '\0')  //If char is null then store the string in ptr and return ret
			{
				ptr = str;
				return ret;
			}
			if(delimiter(*str, delim ))  //Check for char is delimiter if yes make it as null and increase the position 
			{
				*str = '\0';
                ptr = str + 1;
				return ret;
			}
			str++;
		}
}
int delimiter(char c, char *delim)
{
	while(*delim != '\0')  //Check for char is delimiter if yes return 1 else 0
	{
		if(c == *delim)
			return 1;
		delim++;
    }
	    return 0;
}

	
