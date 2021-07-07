#include "../includes/ft_printf.h"

int	ft_type_list(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
		|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int	ft_treatment(int c, t_flags flags, va_list args)
{
	int		char_count;

	char_count = 0;
	if (c == 'c')
		char_count = ft_char_treat (va_arg(args, int), flags);
	else if (c == 's')
		char_count = ft_str_treat(va_arg(args, char *), flags);
	else if (c == 'd' || c == 'i')
		char_count = ft_int_treat(va_arg(args, int), flags);
	else if (c == 'u')
		char_count += ft_uint_treat((unsigned int)va_arg(args, unsigned int),
				flags);
	else if (c == '%')
		char_count += ft_percent_treat(flags);
	else if (c == 'x')
		char_count += ft_hexa_treat(va_arg(args, unsigned int), 1, flags);
	else if (c == 'X')
		char_count += ft_hexa_treat(va_arg(args, unsigned int), 0, flags);
	else if (c == 'p')
		char_count = ft_pointer_treat(va_arg(args, unsigned long long), flags);
	return (char_count);
}
