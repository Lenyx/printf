#include "../includes/ft_printf.h"

static int	ft_put_pointer(char *pointer)
{
	int	char_count;

	char_count = 0;
	char_count += ft_putstrlen("0x", 2);
	char_count += ft_putstrlen(pointer, ft_strlen(pointer));
	return (char_count);
}

int	ft_pointer_treat(unsigned long long ull, t_flags flags)
{
	char	*pointer;
	int		char_count;

	char_count = 0;
	pointer = ft_ull_base(ull, 16);
	pointer = ft_str_tolower(pointer);
	char_count += ft_width_treat(flags.width, ft_strlen(pointer) + 2, 0);
	char_count += ft_put_pointer(pointer);
	free(pointer);
	return (char_count);
}
