#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*srccpy;
	unsigned char	*destcpy;

	srccpy = (unsigned char *)src;
	destcpy = (unsigned char *)dst;
	if (n == 0 || destcpy == srccpy)
		return (dst);
	while (n > 0)
	{
		*destcpy = *srccpy;
		destcpy++;
		srccpy++;
		n--;
	}
	return (dst);
}
