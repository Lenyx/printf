#include "../includes/ft_printf.h"

static int	ft_put_int(char *d_i, int save_i, t_flags flags)
{
	int		char_count;

	char_count = 0;
	char_count += ft_width_treat(flags.width, ft_strlen(d_i), 0);
	if (save_i < 0)
		ft_putchar('-');
	char_count += ft_putstrlen(d_i, ft_strlen(d_i));
	return (char_count);
}

int	ft_int_treat(int i, t_flags flags)
{
	char	*d_i;
	int		save_i;
	int		char_count;

	save_i = i;
	char_count = 0;
	if (i < 0)
	{
		i *= -1;
		flags.width--;
		char_count++;
	}
	d_i = ft_itoa(i);
	char_count += ft_put_int(d_i, save_i, flags);
	free(d_i);
	return (char_count);
}
