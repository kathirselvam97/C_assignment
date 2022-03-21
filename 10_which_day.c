/*
 Name             : Kathiravan s
 Date             : 31-12-2021
 Assignment no    : 10
 Assignment title : To find which day of the year
 Description      : 1)Read the n days and start day from user
                    2)Check n is between 1 and 365 and start day from 1 to 7
                    3)Count the n days from start day
                    4)Print the result using switch case
 Sample input     : Enter the value of 'n' : 9
     		    Choose First Day :
		    1. Sunday
		    2. Monday
		    3. Tuesday
  		    4. Wednesday
		    5. Thursday
		    6. Friday
		    7. Saturday
		    Enter the option to set the first day : 2
 Sample output    : The day is Tuesday
 Sample input     : Enter the value of 'n' : 9
                    Choose First Day :
		    1. Sunday
		    2. Monday
		    3. Tuesday
  		    4. Wednesday
		    5. Thursday
		    6. Friday
		    7. Saturday
                    Enter the option to set the first day : 8
 Sample output    : Error: Invalid input, first day should be > 0 and <= 7
 Sample input     : Enter the value of 'n' : 0
 Sample output    : Error: Invalid Input, n value should be > 0 and <= 365
*/

#include<stdio.h>  //Header file
int main()  //Main function 
{
	int n,first_day,result=0;  //variable declaration
	printf("Enter the value of 'n' : "); 
	scanf("%d", &n);          //Read the n value from user
	if ( n >= 1 & n <= 365 )  //Check number is between 1 and 365
	{
	printf("Choose First Day :\n"
		"1. Sunday\n"
		"2. Monday\n"
		"3. Tuesday\n"       //Display the options
		"4. Wednesday\n"
		"5. Thursday\n"
		"6. Friday\n"
		"7. Saturday\n");
	printf("Enter the option to set the first day : ");
	scanf("%d", &first_day);      //Read the first day from user
	if ( first_day >= 1 & first_day <=7 ) //Check that number is between 1 and 7
	{
		result = n + first_day -1; //Subtact the n value from first day.(Here 7 represents no of days in week, 1 for including that start day)
        printf("%d", result);			
	}
	else
	{
		printf("Error: Invalid input, first day should be > 0 and <= 7\n");
		return 0;
	}
	if ( result > 7 & result % 7 != 0 )  //Check result is greater than 7 and remainder is not zero
	{
		result = result % 7; // % by 7, to get the remainder(used to get remaining days if value is bigger)
    }
	if ( result % 7 == 0) //Check if result is completely divided by 7
	{
		printf("The day is Saturday\n"); //If result % 7 == 0, then day must be an last day.
		return 0;
	}
	}
    else
	{
		printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
	}
	switch ( result )   //Use result as an operand for switch
	{
		case 1:
			printf("The day is Sunday\n");
			break;
		case 2:
			printf("The day is Monday\n");
			break;
		case 3:
			printf("The day is Tuesday\n");   //Print the statements according to the results
			break;
		case 4:
			printf("The day is Wednesday\n");
			break;
		case 5:
			printf("The day is Thursday\n");
			break;
		case 6:
			printf("The day is Friday\n");
			break;
		case 7:
			printf("The day is Saturday\n");
			break;
	}

}
