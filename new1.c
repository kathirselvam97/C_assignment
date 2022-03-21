/*
 Name             : Kathiravan s
 Date             : 06-03-2022
 Assignment title : Implement the student record using array of structures
 Description      : 1) Declare structure and its members
                    2) Read no of students and subjects from user
                    3) Go to Function to read student details
                    4) Allocate memory for those details
                    5) Go to avg_grade function and calculate the average and grade
                    6) Prompt user to display, based on roll no or name
                    7) Go to that specific function and display
 Sample input     : Enter no.of students : 2
		    Enter no.of subjects : 2
		    Enter the name of subject 1 : Maths
		    Enter the name of subject 2 : Science
		    ----------Enter the student datails-------------
		    Enter the student Roll no. : 1
		    Enter the student 1 name : Nandhu
		    Enter Maths mark : 99
		    Enter Science mark : 91
		    ----------Enter the student datails-------------
		    Enter the student Roll no. : 2
		    Enter the student 2 name : Bindhu
		    Enter Maths mark : 88
		    Enter Science mark : 78
		    ----Display Menu----
		    1. All student details
		    2. Particular student details
		    Enter your choice : 2
 		    ----Menu for Particular student----
		    1. Name.
		    2. Roll no.
		    Enter you choice : 1
		    Enter the name of the student : Nandhu
 Sample output    : Roll No.          Name        Maths           Science           Average             Grade
                      1              Nandhu        99               91                95                  A
		    Do you want to continue to display(Y/y) : n
*/

#include<stdio.h>
#include<stdlib.h>  //Header files
#include<string.h>


//Defining the structure
typedef struct  //Typedef the structure
{
   char *name;
   int roll_no;  //Members of structure
   float *marks;
   float avg;
   char grade;
   char *sub;
}stu_var;  //structure variable after type def

void details(stu_var *, int, int);
void avg_grade(stu_var *, int, int);
void print_all(stu_var *, int, int);   //Function prototypes
void search_roll(stu_var *p, int, int, int);
void search_name(stu_var *p, char *, int, int);

int main()
{
	int m, n;
	int select, method, num;
	char option, buffer[20] = {'\0'};  //Declare variables

	do
	{
		printf("Enter no.of students : ");
		scanf("%d", &m);
        printf("Enter no.of subjects : ");   //Read no of students and subjects from user
		scanf("%d", &n);
 		stu_var *p = malloc(m *  sizeof(stu_var)); //Allocating the memory for the structure
		details(p , m, n); //Function call
		avg_grade(p, m, n);
		printf("----Display Menu----\n1. All student details\n2. Particular student details\n");			
		printf("Enter your choice : ");  //Read the choice from user and move to that case
		scanf("%d", &select);
		switch (select)
	    {
			case 1:
			        print_all(p, m, n); //Calling print_all display function
     		    		break;
			case 2:
				printf("----Menu for Particular student----\n1. Name.\n2. Roll no.\n");
			 	printf("Enter you choice : "); //If for particular student the prompt user to enter their choice
				scanf("%d", &method);          //To display by name or roll no
			switch (method)
			{
				case 1:
					printf("Enter the name of the student : ");
				        scanf("%s", buffer);            //Prompt user the name to search
 					search_name(p, buffer, m, n);  //Call the function to search for name
    		                        break;
			        case 2:		
			           printf("Enter the roll no: ");
			           scanf("%d", &num);             //Prompt user the rollno to search
    		                   search_roll(p, m, n, num);     //Call the function to search for roll no
	     	                   break;
			        default:
					printf("Invalid choice\n");
			}
		        break;
                        default:
			        printf("Invalid choice\n");
	    }
	printf("Do you want to continue to display(Y/y) : ");  
	scanf("\n%c", &option);
	}while (option == 'Y' || option == 'y');  //Prompt user to continue or not
	return 0;
}

void details(stu_var *p, int m, int n)  //Function to read student details
{
	int i, j, SIZE;
	char buffer[20] = {'\0'}, buf1[50] = {'\0'};  //Declare the variables
	for ( i = 0; i < n; i++ )
	{
		printf("Enter the name of subject %d : ", i+1);
		scanf("%s", buf1);                      //Read the name of subject from user 
		SIZE = strlen(buf1);                    //Calculate the size and allocate memory
		p[i].sub = malloc(SIZE + 1);
		strcpy(p[i].sub, buf1);                 //Copy the string to allocated memory
	}
	for (i = 0; i < m; i++)
	{
		printf("----------Enter the student datails-------------\n");
	    printf("Enter the student Roll no. : ");
	    scanf("%d", &p[i].roll_no);	    //prompt the user for roll no and store that in array
		getchar();
		printf("Enter the student %d name : ", i+1);
		scanf("%s", buffer);
		SIZE = strlen(buffer);  //Calculate the string length and allocate the memory for struct member
		p[i].name = malloc(SIZE + 1);
		strcpy(p[i].name, buffer);  //Copy the name to struct variable
		p[i].marks = malloc(n * sizeof(float));  //Allocate the memory for marks
		for (j = 0; j < n; j++)
		{
			getchar();
		    printf("Enter %s mark : ", p[j].sub);  //Use loop for no of sub and prompt for marks
			scanf("%f", p[i].marks+ j);
		}
		memset(buffer, '\0', 20);  //Reset to get the new value for net iteration
		memset(buf1, '\0', 50);
	}
}

void avg_grade(stu_var *p, int m, int n)  //Function to calculate avg and grade
{
	int i, j;
	float sum, avg;
    for (i = 0; i < m; i++)
	{	
		sum = 0;
		for (j = 0; j < n; j++)
		{
			sum += *(p[i].marks + j);  //Sum the marks of all subjects and find average
		}
		p[i].avg = sum / n;
		if(p[i].avg >= 90)
			p[i].grade = 'A';
		else if(p[i].avg >= 80 && p[i].avg < 90)
			p[i].grade = 'B';
		else if(p[i].avg >= 70 && p[i].avg < 80)  //Assigning the grade based on the average
			p[i].grade = 'C';
		else if(p[i].avg >= 60 && p[i].avg < 70)
			p[i].grade = 'D';
		else if(p[i].avg >= 50 && p[i].avg < 60)
			p[i].grade = 'E';
		else
			p[i].grade = 'F';
	}
}

void search_roll(stu_var *p, int m, int n, int roll_no) //function to Search for student by rollno
{
	int i, j;
	printf("Roll No.\tName\t");
	for(i = 0; i < n; i++)
		printf("%s\t\t", p[i].sub); 
	printf("Average\t\tGrade\n");
	for (i = 0; i < m; i++)
	{
		if(p[i].roll_no == roll_no)  //Check roll no present in the structure member 
		{
			printf("%d\t\t%s\t", p[i].roll_no, p[i].name);
			for (j = 0; j < n; j++)
			{
				printf("%f\t", *(p[i].marks + j));  //Print the details
			}
			printf("%f\t\t%c\n", p[i].avg, p[i].grade);
			return ;
		}
	}
}

void search_name(stu_var *p,char* name, int m, int n)  //function to Search for student by rollno
{
	
	int i, j;
	printf("Roll No.\tName\t");
	for(i = 0; i < n; i++)
		printf("%s\t\t", p[i].sub);
	printf("Average\t\tGrade\n");
	for (i = 0; i < m; i++)
	{
		if(strcmp(p[i].name, name) == 0)  //Check name present in the structure member
		{
			printf("%d\t\t%s\t", p[i].roll_no, p[i].name);
			for (j = 0; j < n; j++)
			{
				printf("%f\t", *(p[i].marks + j));   //Print the details
			}
			printf("%f\t\t%c\n", p[i].avg, p[i].grade);
			return ;
		}
	}
}

void print_all(stu_var *p, int m, int n)  //Function to print all the students details
{
	int i, j;
	printf("Roll No.\tName\t");
	for(i = 0; i < n; i++)
		printf("%s\t\t", p[i].sub);
	printf("Average\t\tGrade\n");
	for (i = 0; i < m; i++)
	{
		printf("%d\t\t%s\t", p[i].roll_no, p[i].name);  
		for (j = 0; j < n; j++)
		{
			printf("%f\t", *(p[i].marks + j));
		}
		printf("%f\t\t%c\n", p[i].avg, p[i].grade);
	}
}

