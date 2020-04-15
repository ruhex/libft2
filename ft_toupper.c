#include "libft.h"

/*
Checks for an alphabetic character.
*/

int ft_toupper(int c)
{
	return ((c >= 97 && c <= 122) ? (c - 32) : c);
}
