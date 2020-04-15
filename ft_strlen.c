#include "libft.h"

/*
The ft_strlen() function calculates the length of the string pointed to
 by s, excluding the terminating null byte ('\0').
The ft_strlen() function returns the number of bytes in the string
 pointed to by s.
*/

size_t ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
