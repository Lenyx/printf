#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t				count;
	unsigned int		i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	int				i;
	size_t			count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	return (count);
}

static	void	*ft_free(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
	return (NULL);
}

static	char	**ft_create_strings(char const *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (i < ft_word_count(s, c))
	{
		str[i] = (char *)malloc(sizeof(char) * (ft_word_len(&s[k], c) + 1));
		if (!str[i] && i == 0)
			return (NULL);
		else if (!str[i])
			return (ft_free(str, (i - 1)));
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			str[i][j++] = s[k++];
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!str)
		return (NULL);
	str = ft_create_strings(s, c, str);
	return (str);
}
