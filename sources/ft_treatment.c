#include "../includes/ft_printf.h"

int	ft_type_list(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
		|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int	ft_treatment(int c, va_list args)
{
	int		char_count;

	char_count = 0;
	if (c == 'c')
		char_count = ft_char_treat (va_arg(args, int));
	else if (c == 's')
		char_count = ft_str_treat(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		char_count = ft_int_treat(va_arg(args, int));
	else if (c == 'u')
		char_count += ft_uint_treat((unsigned int)va_arg(args, unsigned int));
	else if (c == '%')
		char_count += ft_putstrlen("%", 1);
	else if (c == 'x')
		char_count += ft_hexa_treat(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		char_count += ft_hexa_treat(va_arg(args, unsigned int), 0);
	else if (c == 'p')
		char_count = ft_pointer_treat(va_arg(args, unsigned long long));
	return (char_count);
}
