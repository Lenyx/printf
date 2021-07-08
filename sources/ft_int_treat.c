#include "../includes/ft_printf.h"

int	ft_int_treat(int i)
{
	char	*d_i;
	int		save_i;
	int		char_count;

	save_i = i;
	char_count = 0;
	if (i < 0)
	{
		i *= -1;
		char_count++;
	}
	d_i = ft_itoa(i);
	if (save_i < 0)
		ft_putchar('-');
	char_count += ft_putstrlen(d_i, ft_strlen(d_i));
	free(d_i);
	return (char_count);
}
