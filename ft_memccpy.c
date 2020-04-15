#include "libft.h"

/*
The memccpy() function copies no more than n bytes from memory area src to memory area dest,
stopping when the character c is found.
If the memory areas overlap, the results are undefined.
*/

void *memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char)dest;
	s = (const unsigned char)src;
	while (((--n > 0) && (*(s++) != (unsigned char)c)))
		*d++ = *s;
	return((const unsigned char)dest);
}
