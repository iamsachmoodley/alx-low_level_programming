#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
	printf("%d is a positive number\n", n);
}
if (n < 0)
{
	printf("%d is a negative number\n", n);
}
if (n == 0)
{
	printf("%d is equal to zero\n", n);
}