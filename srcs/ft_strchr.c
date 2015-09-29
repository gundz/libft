#include <stddef.h>

char				*ft_strchr(const char *src, int c)
{
	while (*src != c)
	{
		if (*src == '\0')
			return (NULL);
		src++;
	}
	return ((char *)src);
}