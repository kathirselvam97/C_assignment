/*
 Name             : Kathiravan s
 Date             : 18-02-2022
 Assignment title : Generate consecutive NRPS of length n using k distinct character
 Description      : 1) Read number of char and length of string from user
                    2) Get the chars from user
                    3) Check all the chars are distinct
                    4) call the function
                    5) Use loop and print char one by one
                    6) When we reached last char increase the value of flag and change the starting char
                    7) Print the characters.
 Sample input     : Enter the number characters C : 3
		    Enter the Length of the string N : 6
		    Enter 3 distinct characters : a b c
 Sample output    : Possible NRPS is abcbca
*/

#include <stdio.h>  //Header file

void nrps(char *, int, int);  //Function prototype

int main()
{
	int c, n, i, j;
	printf("Enter the number characters C : ");
	scanf("%d", &c); 
	printf("Enter the Length of the string N : ");  //Read number of char and length of string from user
	scanf("%d", &n);
	char charac[c];
	printf("Enter %d distinct characters : ", c);
	for( i = 0; i < c; i++ )
		scanf("\n%c", &charac[i]);  //Get the chars from user
	for( i = 0; i < c; i++ )
	{
		for( j = (i+1); j < c; j++ )   //Check all the chars are distinct
		{
			if ( charac[i] == charac[j])
				printf("Error : Enter distinct characters\n");
		}
	}
	nrps(charac, n, c);  //Call the function
}

void nrps(char *str, int n, int c)
{
	int i, flag = 0;
	for( i = 0; i < n; i++ )  //Use loop and print char one by one
	{
		if ( i % c == 0 && i != 0 ) //When we reached last char increase the value of flag and change the starting char
		{
			flag++;
		}
		printf("%c", *(str+((i+flag)%c))); //Print the chars
	}
}
