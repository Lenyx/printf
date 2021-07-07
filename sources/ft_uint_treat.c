#include "../includes/ft_printf.h"

static int	ft_put_uint(char *unsi_int, t_flags flags)
{
	int		char_count;

	char_count = 0;
	char_count += ft_width_treat(flags.width, ft_strlen(unsi_int), 0);
	char_count += ft_putstrlen(unsi_int, ft_strlen(unsi_int));
	return (char_count);
}

int	ft_uint_treat(unsigned int unsi, t_flags flags)
{
	char	*unsi_int;
	int		char_count;

	char_count = 0;
	unsi = (unsigned int)(4294967295 + 1 + unsi);
	unsi_int = ft_u_itoa(unsi);
	char_count += ft_put_uint(unsi_int, flags);
	free(unsi_int);
	return (char_count);
}
