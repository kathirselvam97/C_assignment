/*
 Name             : Kathiravan s
 Date             : 18-02-2022
 Assignment title : print all possible combinations of given string.
 Description      : 1) Get the string from user
 		    2) Find the length of string
                    3) Call the function 
                    4) swap the char by char itself and print the string first
                    5) Fix one char and swap the other char using backtrack
                    6)Print the result
 Sample input     : Enter a string: abc
 Sample output    : All possible combinations of given string :abc
                    acb
                    bca
                    bac
                    cab
                    cba

*/

#include<stdio.h> //Header file

void combination(char *,int ,int );  //Function prototypes
int my_strlen(char*);

int main()
{
	char str[100], option;
	int n;
	int res ,i ,j;
    do
	{
	printf("Enter a string: ");  //Get the string from user
	getchar();
	scanf("%100[^\n]", str);   
	n = my_strlen(str);  //Call the fucntion and store the length of string in n
    for( i = 0; i < n; i++ )
	{
		for( j = (i+1); j < n; j++ )   //Check all the chars are distinct
		{
			if ( str[i] == str[j])
			{
				printf("Error: please enter distinct characters.\n");
			    return 0;
			}
		}
	}
        printf("All possible combinations of given string :%s\n", str); 
        combination(str,0,n-1);  //Call the function with string, start and end index              
		getchar();
		printf("Do you want to continue: ");
		scanf("%c", &option);
     }while(option == 'y'|| option == 'Y');
	

	return 0;
}

int my_strlen(char *str)  
{
	int count=0;
	while(*str++)
	{
		count++;  //Get the total characters in string and return it 
	}
	return count;
}

void combination( char *str,int first_index,int length )
{
	int i;
	char temp;
	if ( first_index == length )  //If first index is equals to the length of string then prisnt the string
		printf("%s\n", str);
	else
	{
	for ( i = first_index; i <= length; i++ )
	{
		temp = str[first_index];  //First swap char with same char and print the string completely 
		str[first_index] = str[i];   //Swap the two values 
		str[i] = temp;
        combination( str, first_index+1, length ); //Call the function recsursievely with new first index
		temp = str[first_index];  //Backtrace and print other chars too
    	str[first_index] = str[i];
	 	str[i] = temp;
	}
	}
}

 

