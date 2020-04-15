#include "libft.h"

/*
The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap
The memcpy() function returns a pointer to dest.
*/

void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char)dest;
    s = (const unsigned char)src;
    while (--n > 0)
        *d++ = *s++;
    return((unsigned char)dest);
}