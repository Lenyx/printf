#include "../includes/ft_printf.h"

static char	*base_treat(unsigned long long ull_save, int base, char *res,
int count)
{
	while (ull_save != 0)
	{
		if ((ull_save % base) < 10)
			res[count - 1] = (ull_save % base) + 48;
		else
			res[count - 1] = (ull_save % base) + 55;
		ull_save /= base;
		count--;
	}
	return (res);
}

char	*ft_ull_base(unsigned long long ull, int base)
{
	char				*res;
	unsigned long long	ull_save;
	int					count;

	res = 0;
	count = 0;
	ull_save = ull;
	if (ull == 0)
	{
		res = ft_strdup("0");
		return (res);
	}
	while (ull != 0)
	{
		ull /= base;
		count++;
	}
	res = malloc(sizeof(char) * (count + 1));
	if (!res)
		return (0);
	res[count] = '\0';
	res = base_treat(ull_save, base, res, count);
	return (res);
}
