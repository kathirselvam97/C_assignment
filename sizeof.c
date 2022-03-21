/*
 Name             : Kathiravan s
 Date             : 28-02-2022
 Assignment title : Define a macro SIZEOF(x), without using sizeof operator
 Description      : 1) Define macro like Subtracting the adress by type casting.
                    2) Intitalize variable with different datatype.
                    3) Call the macro calulate the size and print it.
 Sample output    : Size of int : 4 bytes
		    Size of char : 1 byte
		    Size of float : 4 bytes
		    Size of double : 8 bytes
		    Size of unsigned int : 4 bytes
	   	    Size of long int : 8 bytes
*/

#include <stdio.h>  //Header files
#include <stdlib.h>

#define SIZEOF(x) (char *)(&x+1) -  (char *)(&x)  //Subtracting the adress by type casting gives exact size of that datatype
int main()
{
	int i = 8;
	float f = 8.9;  //Declare and intitalize variable with different datatype
	char c = 'y';
	double d = 0.7;
	short s = 2;
	unsigned int ui = 9;
	long int l = 5;
	long long int ll = 6;
	long double ld = 2.7;
    unsigned long int ul = 10;
	printf("Size of int : %lu\n", SIZEOF(i));
	printf("Size of float : %lu\n", SIZEOF(f));  //Call the macro calulate the size and print it
    printf("Size of char : %lu\n", SIZEOF(c));
    printf("Size of double : %lu\n", SIZEOF(d));
    printf("Size of short int : %lu\n", SIZEOF(s));
    printf("Size of long int : %lu\n", SIZEOF(l));
    printf("Size of long long int : %lu\n", SIZEOF(ll));
    printf("Size of long double : %lu\n", SIZEOF(ld));
    printf("Size of unsigned long int : %lu\n", SIZEOF(ul));
    printf("Size of unsigned int : %lu\n", SIZEOF(ui));
    return 0;
}
