#include "../includes/ft_printf.h"

int	ft_pointer_treat(unsigned long long ull)
{
	char	*pointer;
	int		char_count;

	char_count = 0;
	pointer = ft_ull_base(ull, 16);
	pointer = ft_str_tolower(pointer);
	char_count += ft_putstrlen("0x", 2);
	char_count += ft_putstrlen(pointer, ft_strlen(pointer));
	free(pointer);
	return (char_count);
}
