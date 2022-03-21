/*
 Name             : Kathiravan s
 Date             : 09-02-2022
 Assignment title : Replace each string of one or more blanks by a single blank
 Description      : 1) Declare variables and read the string from user
                    2) call the function
                    3) Get the individual char from string using loop
                    4) If char is space or tab then count  how many space or tabs are there
                    5) Then print the result in main function
 Sample input     : Enter the string with more spaces in between two words
                    Pointers     are               sharp     knives.
 Sample output    : Pointers are sharp knives.
*/

#include<stdio.h>  //Header file

void replace_blank(char *);  //Function prototype

int main()
{
    char str[100];
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);  //Read string from the user
    replace_blank(str);  //Call the function
    printf("%s\n", str);  //Print the result
}

void replace_blank(char *str)  //Fucntion declaration
{
	int i, j=0, flag=0;  //Declare variables
	for ( i = 0; str[i] != '\0'; i++ )  //Get the individual char from string using loop
	{
             if (str[i] == ' ' || str[i] == '\t')  //If char is space or tab then increase flag count
		 flag++;
																 
             if (str[i] != ' ' && str[i] != '\t')  //If char is not space or tab then check flag is >=1
             {	
	        if (flag >= 1) 
                {
		    flag = 0;   
		    str[j++] = ' ';  //Make flag 0 and set string position as empty
	        }
	        str[j++] = str[i];
	     }																			}
     
	     str[j] = '\0';  //set last char as null
}



        
