
<<Documentation
 Name             : Kathiravan s
 Date             : 24-12-2021
 Assignment no    : 5
 Assignment title : Program to generate AP, GP, HP series
 Description      : 1)Prompt the first value, Common diff and Number of terms from the user
                    2)Check all the values are positive
                    3)Set Loop to go for N times
                    4)Add the first and common diff to print AP
                    5)Multiply common diff and first num to print GP
                    6)Find the reciprocal of AP to print HP
                    7)Print the sequence using seperate loops
                    8)Print error if number is negative 
 Sample input     : Enter the First Number 'A': 2
                    Enter the Common Difference / Ratio 'R': 3
                    Enter the number of terms 'N': 5
 Sample output    : AP = 2, 5, 8, 11, 14
                    GP = 2, 6, 18, 54, 162
                    HP = 0.500000, 0.200000, 0.125000, 0.0909091, 0.0714285
 Sample input     : Enter the First Number 'A': 2
                    Enter the Common Difference / Ratio 'R': 3
                    Enter the number of terms 'N': -5
 Sample output    : Invalid input
Documentation

#include<stdio.h>
int main()    //Main function
{
	int A,R,N,i;
	int AP,GP;     //Declare variables    
	float HP;   
	printf("Enter the First Number 'A': ");
	scanf("%d", &A);    //Prompt the first number from user
	printf("Enter the Common Difference / Ratio 'R': ");
	scanf("%d", &R);   //Prompt the common difference from user
	printf("Enter the number of terms 'N': ");
	scanf("%d", &N);   //Prompt the Number of terms from user
	if (A>0 && R>0 && N>0)  //Check all the values user entered is positive
	{
	    printf("AP =");     //Print AP= outside the loop or it will print many times
		AP=A;           //Assign A to AP
		for (i=0;i<N;i++)  //set the Loop to run for N times
		{
			printf(" %d", AP);  //Print the Arithmetic progression sequence
			AP = AP + R;    //Add AP and common difference and store it again in AP 
		}
		printf("\nGP =");  //Print GP= outside the loop or it will print many times
		GP=A;              //Assign A to GP
		for (i=0;i<N;i++)
		{
			printf(" %d", GP);  //Print the Geometric progression sequence
			GP = GP * R;        //Multiply GP with Common diff and update GP
		}
		printf("\nHP =");  //Print HP= outside the loop or it will print many times 
		AP=A;              //Assign A to AP
		HP= (float)1/AP;   //AP is an int variable so use type conversion
                for (i=0;i<N;i++)
		{
			printf(" %f", HP);  //Print the Harmonic progression sequence
                        AP = AP + R;        //Inversion of Arithmetic progression is harmonic progression
			HP = (float)1/AP;   //So find AP and print its reciprocal  
		}
		printf("\n");
	}
	else
	{
		printf("Invalid input");
	}
}
