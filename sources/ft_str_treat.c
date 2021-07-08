#include "../includes/ft_printf.h"

int	ft_str_treat(char *str)
{
	int		char_count;

	char_count = 0;
	if (!str)
		str = "(null)";
	char_count += ft_putstrlen(str, ft_strlen(str));
	return (char_count);
}
