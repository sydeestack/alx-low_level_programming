#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i; 
	char b; 
	long num; 
	long long num2; 
	float amount; 
	
	printf("The size of char %d byte(s)\n", (unsigned)sizeof(b));
	printf("The size of int %d byte(s)\n", (unsigned)sizeof(i));
	printf("The size of long %d byte(s)\n", (unsigned)sizeof(num));
	printf("The size of long long %d byte(s)\n", (unsigned)sizeof(num2));
	printf("The size of float %d byte(s)\n", (unsigned)sizeof(amount));
	return (0);
}
