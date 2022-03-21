/*
 Name             : Kathiravan s
 Date             : 26-02-2022
 Assignment title : Read n & n person names of maxlen 32. Sort and print the names
 Description      : 1) Read the number of names from user
 		    2) Allocate the memory for n users with maxlength of 32
                    3) Get the names from user and check its maxlength below 32
                    4) Call the function by passing two names and compare two name char by char
                    5) If string are equal return 0 else return the number 
                    6) If res is greater then 0 then call the swap function
                    7) Swap those two names till end char by char
                    8) Print the results in main and free the memory
 Sample input     : Enter the size: 5

		    Enter the 5 names of length max 32 characters in each
		    [0] -> Delhi
		    [1] -> Agra
		    [2] -> Kolkata
		    [3] -> Bengaluru
		    [4] -> Chennai

 Sample output    : The sorted names are:
		    Agra
 		    Bengaluru
   		    Chennai
                    Delhi
                    Kolkata
*/

#include <stdio.h>
#include <stdlib.h>  //Header files

void sort_names(char (*)[], int);
int length(char *);
int compare(char *, char *);  //Function prototypes
void swaping(char *, char *, int size);
int main()
{
	int n, i;
	char (*name)[32];
    printf("Enter the size: ");  //Read the number of names from user
	scanf("%d", &n);
	name = malloc ( n * 32);  //Allocate the memory for n users with maxlength of 32
	printf("Enter the %d names of length max 32 characters in each\n", n);
	for(i = 0; i < n; i++ )
	{
		printf("[%d]-> ", i);
		scanf("%s", name[i]);  //Get the names from user
		if(length(name[i]))  //Check the names length is less then 32 or print error
		{
			printf("Error: Name length must be < 32");
			return 0;
		}
	}
	sort_names(name, n);  //call the function
	printf("The sorted names are:\n");
	for ( i = 0; i < n; i++ )   //Print the results
		printf("%s\n", name[i]);
	free(name);  //Free the memory
}
 
int length(char *c)
{
	int count = 0;
	while(*c++)    //Get the length of string and check the length is less then 32
		count++;
	if (count > 32)
		return 1;
	else
		return 0;
	
}

void sort_names(char (*name)[32], int n)
{
	int i, j;
	char *temp;
	int res;
	for( i = 0; i < n; i++ )
	{
		for( j = 0; j < n-i-1; j++ )  //Use bubble sort 
		{
            res = compare(name[j], name[j+1]);  //Call the function by passing two names
			if(res > 0)
			{
				swaping(name[j], name[j+1], 32);  //If res is greater then 0 then call the swap function
			}
		}
	}
}

int compare(char *ptr, char *ptr1)
{
	while(*ptr == *ptr1)  //Check one by character till end
	{
		ptr++;
		ptr1++;
	}
	if(*ptr == *ptr1)  //If string are equal return 0 else return the number
		return 0;
	else
		return *ptr - *ptr1;
}

void swaping(char *name1, char *name2, int size)
{
	int i;
	char temp;
	for ( i = 0; i < size; i++ )  //Swap those two names till end char by char
	{
		temp = *name1;
	    *name1++ = *name2;
		*name2++ = temp;
	}
}
