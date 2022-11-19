#include "main.h"
/**
 *power_recursion - calculate value of x raised to the power of y.
 *@a: input int
 *@b: input int
 *Return: power number
 */
int power_recursion(int a, int b)
{
	if (b > 0)
		return (power_recursion(a, b - 1) * a);
	else if (b == 0)
		return (1);
	else
		return (-1);
}

/**
 *strlen_recursion - returns the length of a string
 *@s: pointer to character
 *Return: count size
 */
int strlen_recursion(const char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		return (count + strlen_recursion(s + 1));
	}
	else
	{
		return (count);
	}
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0;
	unsigned int conv_num = 0;

	if (!b)
		return (0);

	len = strlen_recursion(b) - 1;

	while (b[len])
	{
		if (b[len] == '0')
			conv_num += 0;
		else if (b[len] == '1')
			conv_num += power_recursion(2, i);
		else
			return (0);
		len--;
		i++;
	}

	return (conv_num);
}
