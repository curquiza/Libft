#include "libft.h"

long int	ft_atoli(char *str)
{
	int			neg;
	long int	result;

	if (!str)
		return (0);
	neg = 1;
	result = 0;
	while (*str == 9 || *str == 10 || *str == 11 || *str == 12 || *str == 13
			|| *str == 32)
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * neg);
}
