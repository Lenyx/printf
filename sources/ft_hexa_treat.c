#include "../includes/ft_printf.h"

static int	ft_put_hexa(char *hexa, t_flags flags)
{
	int	char_count;

	char_count = 0;
	char_count += ft_width_treat(flags.width, ft_strlen(hexa), 0);
	char_count += ft_putstrlen(hexa, ft_strlen(hexa));
	return (char_count);
}

int	ft_hexa_treat(unsigned int ui, int lower, t_flags flags)
{
	char	*hexa;
	int		char_count;

	char_count = 0;
	ui = (unsigned int)(4294967295 + 1 + ui);
	hexa = ft_ull_base((unsigned long long)ui, 16);
	if (lower == 1)
		hexa = ft_str_tolower(hexa);
	char_count += ft_put_hexa(hexa, flags);
	free(hexa);
	return (char_count);
}
