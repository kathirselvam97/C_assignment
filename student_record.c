#include<stdio.h>
#include<string.h>
int cal_grade(int , char *);
struct student
{
	char *stu_name;
	char *sub;
	int roll_no;
	int marks;
	int avg;

}s;
int main()
{
	int no_stu, no_sub, i, j, choice, sum;
	char grade = 0;
	char name[50];
	printf("Enter no.of students : ");
	scanf("%d", &no_stu);
	struct student stu[no_stu];
    printf("Enter no.of subjects : ");
	scanf("%d", &no_sub);
	for(i = 0; i < no_sub; i++)
	{
		printf("Enter the name of subject %d\n", i+1);
		scanf("\n%s", stu[i].sub);
	}
	for(i = 0; i < no_stu; i++)
	{
	    printf("----------Enter the student datails-------------\n");
		printf("Enter the student Roll no. :\n");
		scanf("%d", &stu[i].roll_no);
		getchar();
		printf("Enter the student %d name :\n", i+1);
	//	getchar();
		scanf("%s", stu[i].stu_name);
		for( j = 0; j < no_sub; j++ )
		{
		printf("Enter %s mark :\n", stu[j].sub);
		scanf("%d", &stu[j].marks);
		}
		sum += stu[i].marks;
	//	stu[i].avg = sum / no_sub;
		sum = 0;
	}
/*	printf("----Display Menu----\n1. All student details\n2. Particular student details\n");
    printf("Enter your choice : ");
	scanf("%d", &choice);
	if(choice == 1)
	{
		printf("Roll No.\tName\t");
		for( i = 0; i < no_sub; i++ )
			printf("%s\t", s.sub[i]);
			printf("Average\tGrade\n");
        for( i = 0; i < no_stu; i++ )
		{
			printf("%d\t%s\t", s.roll_no[i], s.stu_name[i]);
		    for(j = 0; j < no_sub; j++)
			{
				printf("%d\t", s.marks[j]);
			}
			    printf("%d\t", s.avg[i]);
			    cal_grade(i, &grade);
			    printf("%c\n", grade);
		}
	}*/
/*	if(choice == 2)
	{
		printf("----Menu for Particular student----\n1. Name.\n2. Roll no.\nEnter you choice :");
	    scanf("%d", &choice);
		if(choice == 1)
		{
			printf("Enter the name of the student : \n");
			scanf("%s", name);  
            for ( i = 0; i < no_stu; i++ )
			{
				if ((strcmp(s.stu_name[i], name)) == 0 )
				{
					printf("Roll No.\tName\t");
		            for( int j = 0; j < no_sub; j++ )
						printf("%d\t", s.sub[j]);
					printf("Average\tGrade\n");
					printf("%d\t%d\t", s.roll_no[i], s.stu_name[i]);
					for(int k = 0; k < no_sub; k++)
			        {
						printf("%d\t", s.marks[k]);
			        } 
					printf("%d\t", s.avg[i]);
			        char res = cal_grade(i, grade);
			        printf("%c\n", grade);
                 }
			}
		}
	}*/
}
/*	int cal_grade(int i, char *grade)
	{
		if(s.avg[i] > 90) *grade = 'A';
		else if(s.avg[i] > 80 && s.avg[i] < 90) *grade = 'B';
		else if(s.avg[i] > 70 && s.avg[i] < 80) *grade = 'C';
		else if(s.avg[i] > 50 && s.avg[i] < 70) *grade = 'D';
		else if(s.avg[i] > 40 && s.avg[i] < 50) *grade = 'E';
		else *grade = 'F';
	}*/


