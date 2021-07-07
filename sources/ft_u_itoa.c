#include "../includes/ft_printf.h"

static int	ft_estim(long n)
{
	size_t	estim;

	estim = 0;
	if (n < 0)
	{
		estim++;
		n = -n;
	}
	while (n >= 1)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}

static char	*ft_generate(char *res, long nbr, int len, int isneg)
{
	if (nbr != 0)
		res = malloc(sizeof(char) * (len + 1));
	else
	{
		res = ft_strdup("0");
		return (res);
	}
	if (nbr < 0)
	{
		isneg++;
		nbr = -nbr;
	}
	res[len] = '\0';
	while (--len)
	{
		res[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isneg == 1)
		res[0] = '-';
	else
		res[0] = (nbr % 10) + '0';
	return (res);
}

char	*ft_u_itoa(unsigned int n)
{
	int		len;
	char	*res;
	long	nbr;
	int		isneg;

	isneg = 0;
	nbr = n;
	len = ft_estim(nbr);
	res = 0;
	res = ft_generate(res, nbr, len, isneg);
	if (!res)
		return (0);
	return (res);
}
