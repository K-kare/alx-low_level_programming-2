#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entry point
*Return: always 0 success
*/
int main(void)
{
	int i;

	srand(time(0));
        i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
	printf("%d is positive", i);
	}
	else if (i == 0)
	{
	printf("%d is zero", i);
	}
	else 
	{
	printf("%d is negative",i);
	}
	return (0);
}
