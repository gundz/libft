#include <libft.h>
#include <stdlib.h>

int				splitlen(char *str, char c)
{
	int			split;
	int			i;

	if (str == NULL)
		return (-1);
	split = i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			split++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		i++;
	}
	return (split);
}

char				**ft_strsplit(const char *s, char c)
{
	char			**splited;
	int			i;
	int			j;
	int			tmp;
	int			len;

	if (!(splited = (char **)malloc(sizeof(char *) * splitlen((char *)s, c))))
		return (NULL);
	i = j = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			tmp = i;
			len = 0;
			while (s[tmp] != c && s[tmp] != '\0')
				len++;
			splited[j++] = ft_strsub(s, i, i + len);
			i = i + len;
		}
		i++;
	}
	return (splited);
}
