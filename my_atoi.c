/*
 Name             : Kathiravan s
 Date             : 08-02-2022
 Assignment title : Implement atoi function
 Description      : 1) Get the string from user
                    2) Call the function and take individual char using loop
                    3) Check it is fully number,if yes then convert it to integer.
                    4) Else make flag as zero
                    5) if negative make flag as -1
                    6) Return the flag * num and print it in main function.
 Sample input     : Enter a numeric string: 12345
 Sample output    : String to integer is 12345
 Sample input     : Enter a numeric string: abcd12345
 Sample output    : String to integer is 0
*/

#include <stdio.h>  //Header file

int my_atoi(const char *);  //Function prototype

int main()  
{
	char str[20];
    printf("Enter a numeric string : ");  //Get the string from user
	scanf("%s", str);
    printf("String to integer is %d\n", my_atoi(str));  //Print the result
}

int my_atoi(const char *str)  //Function starts here 
{
   int num=0, flag = 1, count = 0, i;   //Declare variables
   for( i = 0 ; str[i] != '\0'; i++ )  //Get individual character from character array
   {
	   if (str[i] >= 48 && str[i] <= 57 )
		   num = (num * 10 ) + (str[i] - 48);  //If char is integer value then convert it to int
	   else if (str[0] == '-' || str[1] == '+')
	   {
		   flag = -1;  //If char is not integer then assign flag as -1 and increase the count value
	       count++;
	   }
	    else if (str[0] == '+' || str[1] == '-')
		{
			flag = 1;  //If char is not int then assign flag as 1 and increase the count value
		    count++;
		}
	   else
		   break;
   }
   if(count == 2 )
   {
	   flag=0;  //If count value is 2 then assign flag as 0
	   num=0;
   }
   return flag * num;  //Return the value
}

