#include <libft.h>

char							*ft_strcat(char *dest, const char *const src)
{
	unsigned int				len1;
	unsigned int				len2;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		dest[len1] = dest[len1];
		++len1;
	}
	len2 = 0;
	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		++len1;
		++len2;
	}
	dest[len1] = '\0';
	return (dest);
}
