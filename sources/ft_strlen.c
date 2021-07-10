#include "../includes/ft_printf.h"

size_t	ft_strlen(const char *string)
{
	int		i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}
