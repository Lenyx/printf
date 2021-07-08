#include "../includes/ft_printf.h"

int	ft_hexa_treat(unsigned int ui, int lower)
{
	char	*hexa;
	int		char_count;

	char_count = 0;
	ui = (unsigned int)(4294967295 + 1 + ui);
	hexa = ft_ull_base((unsigned long long)ui, 16);
	if (lower == 1)
		hexa = ft_str_tolower(hexa);
	char_count += ft_putstrlen(hexa, ft_strlen(hexa));
	free(hexa);
	return (char_count);
}
