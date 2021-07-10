#include "../includes/ft_printf.h"

int	ft_char_treat(char c, t_flags flags)
{
	int		char_count;

	char_count = 0;
	char_count += ft_width_treat(flags.width, 1, 0);
	ft_putchar(c);
	return (char_count + 1);
}
