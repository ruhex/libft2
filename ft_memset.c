#include "libft.h"

/* 
The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
The memset() function returns a pointer to the memory area s.
*/

void *memset(void *s, int c, size_t n)
{
    char *tmp;

    tmp = s;
    while (--n > 0)
        *tmp++ = (unsigned char)c;
    return (s);
}