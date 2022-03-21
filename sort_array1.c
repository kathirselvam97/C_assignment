#include <stdio.h>

void print_sort(int *, int);

int main()
{
	int size, iter;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
	int arr[size];
	printf("Enter the %d elements\n", size);
	for (iter = 0; iter < size; iter++)
		scanf("%d", &arr[iter]);
	print_sort(arr, size);
}

void print_sort(int *arr, int size)
{
	int small = arr[0], i, index[size], a=0;
	unsigned int j, count = 0;
	for( i = 0; i < size; i++ )
	{
			if(arr[i] < small)
			{
				small = arr[i];
			    index[a] = i;
			    ++a;
			}
	}
	printf("%d\n", small);
	small = arr [size - index[a-1] - 1];
	printf("small %d\n", small);
	for( i = 0; i < size-1; i++ )
	{
		printf("i %d\n", i);
	//	for ( j = 0; j < (sizeof(index)/sizeof(index[0])); j++)
		for( j = 0; j < i+1; j++ )
        {
			printf("j %d\n", j);
			if(i == index[j])
			{
               count++;
			}
		}
		printf("count %d\n", count);
			if(arr[i] < small && count == 0)
			{
				small = arr[i];
			    index[a] = i;
			    a++;
			}
		
		
	printf("%d\n", small);
	small = arr [size - index[a-1] - 1];
	printf("small %d\n", small);
	}	
	
	printf("%d %d %d %d", index[0], index[1], index[2], index[3]);
}
    

