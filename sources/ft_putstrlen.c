#include "../includes/ft_printf.h"

int	ft_putstrlen(char *str, int len)
{
	int		char_count;

	char_count = 0;
	while (str[char_count] && char_count < len)
		ft_putchar(str[char_count++]);
	return (char_count);
}
