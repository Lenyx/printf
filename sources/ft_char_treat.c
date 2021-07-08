#include "../includes/ft_printf.h"

int	ft_char_treat(char c)
{
	int		char_count;

	char_count = 0;
	ft_putchar(c);
	return (char_count + 1);
}
