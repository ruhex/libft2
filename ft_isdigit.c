#include "libft.h"

/*
ft_isdigit() checks for a digit (0 through 9).
*/

int ft_isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
