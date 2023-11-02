#include "main.h"

/**
 * get_endianness - A function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	Uint num = 1;
	char *byte;

	byte = (char *)&num;
	return ((int)*byte);
}
