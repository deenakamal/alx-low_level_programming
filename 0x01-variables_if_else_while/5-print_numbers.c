#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print single digit number
 *
 * Return: Alwayes 0 (success)
*/
int main(void)
{
	int digit_num;

	for (digit_num = 0; digit_num < 10; digit_num++)
	{
		printf("i%", digit_num);
	}
	putchar('\n');
	return (0);
}
