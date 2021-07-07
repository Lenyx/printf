#include "libft.h"

char 	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (!s)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
