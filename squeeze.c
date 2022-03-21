/*
 Name             : Kathiravan s
 Date             : 10-02-2022
 Assignment title : Squeeze the character in s1 that matches any character in the string s2
 Description      : 1) Declare variables and read the strings from user
                    2) Call the function and get the length of each strings
                    3) Use loop and check individual char of string2 is matched with string1
                    4) If matched overwrite that char by the next char using loop
                    5) Print the resultant string in main function
 Sample input     : Enter s1 : Dennis Ritchie
		    Enter s2 : Linux
 Sample output    : After squeeze s1 : Des Rtche
*/

#include <stdio.h>  //Header file
#include<string.h>

void squeeze(char*, char*);  //Function prototype
int length(char *);

int main()
{
	char str1[100];
    printf("Enter string1: ");
    fgets(str1,30,stdin);       //Declare variables and read the strings from user
	char str2[10];
    printf("Enter string2: ");
	fgets(str2,30,stdin);
    squeeze(str1, str2);  //Call the fucntion
	printf("\nAfter squeeze s1 : %s\n", str1);  //Print the string after squeeze
}

int length(char *str)  //Fucntion declaration
{
	int count = 0;
	while (*str++)
	{
		count++;  //Count number of chars in string and return the count
	}
	return count;
}
 
void squeeze(char *str1, char *str2)  //Fucntion declaration
{
	int i, j, k;
	int str1_len = length(str1);   //Call the function and get the length of each strings
	int str2_len = length(str2);
	for ( i = 0; i < str2_len; i++ )
	{
		for ( j = 0; j < str1_len; j++ )  //Use loop and check individual char of string2 is matched with string1
		{
			printf("%c %c\n", str1[i], str2[j]);
			if ( str2[i] == str1[j] )
			{
				printf("%c %c\n", str1[i], str2[j]); 
				for ( k = j; str1[k] != '\0'; k++ )  //IF matched overwrite that char by the next char using loop
				{
				str1[k] = str1[k+1];
				}
				--str1_len;  //Decrement the length of str1
				--j;
				printf("%s %d\n",str1, str1_len);
			}
		}
	}
}


