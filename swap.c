/*
 Name             : Kathiravan s
 Date             : 01-03-2022
 Assignment title : Define a macro swap (t, x, y) that swaps 2 arguments of type t
 Description      : 1) Read the choice from user.
                    2) Move to that specific case
                    3) Get the values and call macro
                    4) swap the numbers and print the results
 Sample input     : 1. Int
		    2. char
		    3. short
		    4. float
		    5. double
		    6. string
		    Enter you choice : 1
      	   	    Enter the num1 : 10
		    Enter the num2 : 20
 Sample output    : After Swapping :
		    num1 : 20
		    num2 : 10
*/

#include <stdio.h>
#include <stdlib.h>  //Header files

#define swap(t, x, y)  \
{                         \
	t temp = x;         \  //Macro to swap of type t
	x = y;              \
	y = temp;           \
}

int main()
{
	int choice;
	printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\n");
	printf("Enter you choice : ");
	scanf("%d", &choice);  //Get the choice from user 
	switch (choice)  //Check and move to specific case
	{
		case 1:
			{
			int x, y;
			printf("Enter the num1 : ");
			scanf("%d", &x);
			printf("Enter the num2 : ");  //If int get the numbers from user 
			scanf("%d", &y);
			swap(int, x, y)  //Call swap 
			printf("After Swapping :\n");
			printf("num1 : %d\nnum2 : %d\n", x, y);  //Print the results
			break;
			}
		case 2:
			{
			char x, y;
			printf("Enter the character1 : ");  //get the char from user
			scanf("%c", &x);
			printf("Enter the character2 : ");
			scanf("%c", &y);
			swap(char, x, y)  //Call swap
			printf("After Swapping :\n");
			printf("Character1 : %c\n Character2 : %c\n", x, y); //Print the results
			break;
			}
		case 3:
			{
			short x, y;
			printf("Enter the num1 : "); 
			scanf("%hd", &x);
			printf("Enter the num2 : ");
			scanf("%hd", &y);
			swap(short, x, y)
			printf("After Swapping :\n");
			printf("num1 : %hd\nnum2 : %hd\n", x, y);
			break;
			}
		case 4:
			{
			float x, y;
			printf("Enter the num1 : ");
			scanf("%f", &x);
			printf("Enter the num2 : ");
			scanf("%f", &y);
			swap(float, x, y)
			printf("After Swapping :\n");
			printf("num1 : %f\nnum2 : %f\n", x, y);
			break;
			}
		case 5:
			{
			double x,y;
			printf("Enter the num1 : ");
			scanf("%lf", &x);
			printf("Enter the num2 : ");
			scanf("%lf", &y);
			swap(double, x, y)
			printf("After Swapping :\n");
			printf("num1 : %lf\nnum2 : %lf\n", x, y);
			break;
			}
		case 6:
			{
			char x[100], y[100];
			printf("Enter the string1 : ");  //Get the string from user
			scanf("%s", x); 
			printf("Enter the string2 : ");
			scanf("%s", y);
			char *a = x;  //store the string in an pointer
			char *b = y;
			swap(char *, a, b)  //Call swap 
			printf("After Swapping :\n");
			printf("string1 : %s\nstring2 : %s\n", a, b);  //Print the result
			break;
			}
		default:
			printf("Invalid choice\n");
	}
}
