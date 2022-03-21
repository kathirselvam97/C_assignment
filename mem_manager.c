#include<stdio.h>
#include<stdlib.h>
void print(void *, void *, int);
static int flag = 0;
struct result
{
	char *baseaddr;
	char *datatype;
};

int main()
{
	char * const ptr = (char*)malloc(8);
	static void *value;
	value = (char *)ptr;
	void *endvalue = (char *)(ptr+sizeof(value)-1);
	struct result res_val[8];
    int choice, sw_choice, num, count;
	char character;
	float fnum;
	double dnum;
	do
	{
	printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
	printf("Choice ---> ");
	scanf("%d", &choice);
    switch (choice)
    {
		case 1:
			printf("Enter the type you have to insert:\n1. int\n2. char\n3. float\n4. double\nChoice ---> ");
			scanf("%d", &sw_choice);
			switch (sw_choice)
			{
				case 1:
					printf("Enter the int : ");
					scanf("%d", &num);
					printf("%d %d", value, endvalue); 
					if((endvalue - value + 1) < 4)
					{
						printf("Error: Cannot add int\n");
						break;
					}
					res_val[flag].baseaddr = value;
					res_val[flag].datatype = (char *)'i';
				    print(&num, value, sizeof(num));
			 		value += sizeof(*((int *) value));
					break;
				case 2:
					printf("Enter the char : ");
					scanf("%c", &character);
					if((endvalue - value + 1) < 1)
					{
						printf("Error: Cannot add character\n");
						break;
					}
					res_val[flag].baseaddr = value;
					res_val[flag].datatype = (char *)'c';
				    print(&character, value, sizeof(character));
					value += sizeof(*((char *) value));
					break;
					
				case 3:
					printf("Enter the fnum : ");
					scanf("%f", &fnum);
					if((endvalue - value + 1) < 4)
					{
						printf("Error: Cannot add float");
						break;
					}
					res_val[flag].baseaddr = value;
					res_val[flag].datatype = (char *)'f';
				    print(&fnum, value, sizeof(fnum));
					value += sizeof(*((float *) value));
					break;
				case 4:
					printf("Enter the double : ");
					scanf("%lf", &dnum);
					if((endvalue - value + 1) < 8)
					{
						printf("Error: Cannot add double");
						break;
					}
					res_val[flag].baseaddr = value;
					res_val[flag].datatype = (char *)'d';
				    print(&dnum, value, sizeof(dnum));
					value += sizeof(*((double *) value));
					break;
                  default:
					printf("Error: Invalid choice");
					break;
			}
		case 2:



		case 3:
			printf("------------------------\n");
			for(count = 0; count < flag; count++)
			{
				if(*(res_val[count].datatype) == 'i')
					printf("%d: %p --> %d (int) \n", count, (res_val[count].baseaddr), (int) *(res_val[count].baseaddr));
				if(*(res_val[count].datatype) == 'c')
					printf("%d: %p --> %c (char) \n", count, (res_val[count].baseaddr), (char) *(res_val[count].baseaddr));
				if(*(res_val[count].datatype) == 'f')
					printf("%d: %p --> %f (float) \n", count, (res_val[count].baseaddr), (float) *(res_val[count].baseaddr));
				if(*(res_val[count].datatype) == 'd')
					printf("%d: %p --> %lf (double) \n", count, (res_val[count].baseaddr), (double) *(res_val[count].baseaddr));
			}
			printf("------------------------\n");
			break;
		default:
			printf("Error: invalid option");
			break;
	}
	  char option;
	  printf("Continue(y/n): ");
	  scanf("\n%s",&option);
	  if (option == 'y')
	  {
		  continue;
	  }
	  else
	  {
		  free(ptr);
		  value = NULL; 
		  break;
																				          }
	}while(1);
	
}

void print(void *ptr, void *ptr1, int size)
{
	int i;
	char *a = ptr;
	char *b = ptr1;
	flag++;
	for(i = 0; i < size; i++ )
		b[i] = a[i];
}


