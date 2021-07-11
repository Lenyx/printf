#include "../includes/ft_printf.h"

static int	ft_put_str(char *str)
{
	int		char_count;

	char_count = 0;
	char_count += ft_putstrlen(str, ft_strlen(str));
	return (char_count);
}

int	ft_str_treat(char *str, t_flags flags)
{
	int		char_count;

	if (!str)
		str = "(null)";
	char_count = 0;
	char_count += ft_width_treat(flags.width, ft_strlen(str), 0);
	char_count += ft_put_str(str);
	return (char_count);
}
