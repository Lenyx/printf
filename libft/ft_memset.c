#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	unsigned char	*ub;

	ub = (unsigned char *)b;
	while (len)
	{
		*ub = (unsigned char)c;
		ub++;
		len--;
	}
	return (b);
}
