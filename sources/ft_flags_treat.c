#include "../includes/ft_printf.h"
#include <stdio.h>

void	ft_digit_flag(char c, t_flags *flags)
{
	flags->width = (flags->width * 10) + (c - '0');
}
