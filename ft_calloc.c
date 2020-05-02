#include "libft.h"

/*
**
*/

int *ft_calloc(size_t nmemb, size_t size)
{
	int pointer;
	if (!(nmemb && size))
		return NULL;
	pointer = malloc(sizeof(nmemb) * size);
	return pointer;
}
