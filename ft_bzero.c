#include "libft.h"

/* The bzero() function sets the first n bytes of the area starting at s to zero (bytes containing aq\0aq). */

void    bzero(void *s, size_t n)
{
    ft_memset(s, '\0', n);
}