#include "../includes/ft_printf.h"

int	ft_percent_treat(t_flags flags)
{
	int	char_count;

	char_count = 0;
	char_count += ft_width_treat(flags.width, 1, 0);
	char_count += ft_putstrlen("%", 1);
	return (char_count);
}
