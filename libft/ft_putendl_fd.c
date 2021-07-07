#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	n;

	if (s != NULL)
	{
		n = '\n';
		write(fd, s, ft_strlen(s));
		write(fd, &n, 1);
	}
}
