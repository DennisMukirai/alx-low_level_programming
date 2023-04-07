#include "main.h"
int actual_sqrl_recursion(int n, int i)

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be returned
 * return: 0 for natural
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrl_recursion(n, 0));
}

/**
 * actual_sqrl_recursion - recursion to find the natural
 * @n: int to calculate the square root
 * @i: interator
 * return: the result sq root
 */
int actual_sqrl_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrl_recursion(n , i + 1));
}


