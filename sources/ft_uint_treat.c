#include "../includes/ft_printf.h"

int	ft_uint_treat(unsigned int unsi)
{
	char	*unsi_int;
	int		char_count;

	char_count = 0;
	unsi = (unsigned int)(4294967295 + 1 + unsi);
	unsi_int = ft_u_itoa(unsi);
	char_count += ft_putstrlen(unsi_int, ft_strlen(unsi_int));
	free(unsi_int);
	return (char_count);
}
