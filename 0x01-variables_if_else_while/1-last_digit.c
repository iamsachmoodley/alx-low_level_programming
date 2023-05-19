#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if ((n % 10) > 5)
{
	printf("%d has a last digit of %d and is greater than 5\n", n, n % 10);
}
if els e((n % 10) < 6 && (n % 10) != 0)
{
	printf("%d has a last digit of %d and is less than 6 and not 0\n");
}
else
{
	printf("%d has a last digit of %d and is 0\n");
}
	return (0);
}
