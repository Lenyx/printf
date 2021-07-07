#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*udst;
	unsigned char	*usrc;
	size_t			i;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	while (i < n)
	{
		udst[i] = usrc[i];
		if (usrc[i] == (unsigned char)c)
			return (&udst[i + 1]);
		i += 1;
	}
	return (NULL);
}
