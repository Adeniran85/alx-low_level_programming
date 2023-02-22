#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: The cahracter to be checked
 * Return: 1 for lowercase character or 1 for anythng else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
