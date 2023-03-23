#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int Max_P_Number, Prime_Number;

	Max_P_Number = 612852475143;
	for (Prime_Number = 2; Prime_Number <= Max_P_Number; Prime_Number++)
	{
		if (Max_P_Number % Prime_Number == 0)
		{
			Max_P_Number /= Prime_Number;
			Prime_Number--;
		}
	}
	printf("%ld\n", Prime_Number);
	return (0);
}
