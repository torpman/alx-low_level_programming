#include "main.h"

/**
 * _isalpha - checking maybe the character inputed is an
 * alphabet
 *
 * @c: character to check
 * Return: 1 if it is an alphabet 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
