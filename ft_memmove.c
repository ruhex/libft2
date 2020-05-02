#include "libft.h"

/*
**
*/


void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*source;

	i = 0;
	dest = (char*)dest;
	source = (char*)src;
	if (!(source == dst || n == 0))
	{
		if (source < dst)
			while ((int)--n > -1)
				*(dst + n) = *(source + n);
		else
		{
			while ((int)--n > -1)
			{
				*(dst + i) = *(source + i);
				i++;
			}
		}
	}
	return ((void *)dst);
}
