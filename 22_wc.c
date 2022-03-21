/*
 Name             : Kathiravan s
 Date             : 29-01-2022
 Assignment title : Count no. of characters, words and lines, entered through stdin
 Description      : 1) Read the character from user till EOF is given as input
                    2) Increase the character count each time user gives input
                    3) If user gives new line as char the increase the line count
                    4) If user gives input not a alphabet next to alphabet then increase the word count
                    5) Print the values and prompt the user to continue or not
 Sample input     : Hello world
                    Dennis Ritchie
                    Linux
 Sample output    : Character count : 33
                    Line count : 3
                    Word count : 5
                    Do you want to continue(y/Y) : N
*/

#include<stdio.h>  //Header file
int main()    //Main function
{
	char option, ch;  
	do
	{
	int chcount=0, wcount=0, lcount=0, flag=0;  //Declare variables
	while (( ch = getchar()) != EOF )  //Read the character from user till EOF is given as input
	{
		chcount++;       //Increase the character count
	    if ( ch == ' '|| ch == '\t'|| ch =='\0'|| ch =='\n')  //if given character is not alphabet	
		{
		 	if(flag)    //If flag value is 1 then increase the word count                      
			{
			flag = 0;
			wcount++;
		    }
			if ( ch == '\n'||ch == '\0' )  //If the char is new line then increase the line count
				lcount++;
		}
		else
		{
			flag = 1;
		}
	}
	printf("Character count : %d\n", chcount);
	printf("Line count : %d\n", lcount);          //Print the values
	printf("Word count : %d\n", wcount);
	printf("Do you want to continue(y/Y) : ");
	scanf("%c", &option);                             //Ask the user to continue or not
	getchar();
	}while( option == 'y' || option == 'Y' );

}
