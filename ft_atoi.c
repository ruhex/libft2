#include "libft.h"

/*
**	TO-DO fix 32bit+
*/



int	ft_atoi(const char *str)
{
	int			i;
	int			minus;
	long int	nbr;

	i = 0;
	nbr = 0;
	minus = 1;
	if (!str[i])
		return (0);
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + str[i++] - '0';
	return (nbr * minus);
}
