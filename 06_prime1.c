#include<stdio.h>
int main()
{
    int i, j;
	int *primes;
	int n;
	printf("Enter the values of 'n': ");
	scanf("%d", &n);
	for ( i=2; i<n; i++ )
	{
		primes[i] = 1;
	}
	for (i=2; i<n; i++)
	{
		if (primes[i])
		{
			for (j=i; i*j<n ; j++ )
			{
				primes[i*j] = 0;
			}
		}
	}
	printf("Primes lesser are: ");
	for (i=2; i<n; i++)
	{
		if (primes[i])
		{
			printf("%d,", i);
		}
	}
}
