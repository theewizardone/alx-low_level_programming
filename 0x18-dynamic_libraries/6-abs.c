#include "main.h"
/**
 * _abs -  function which evaluates the absolute value of an int
 * @ab: int input
 * Return: Absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
