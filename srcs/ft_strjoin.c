#include <libft.h>
#include <stdlib.h>

char							*ft_strjoin(char *dest, char *src)
{
	unsigned int				len1;
	unsigned int				len2;
	char						*ret;

	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	if (!(ret = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	ret = ft_strcat(dest, src);
	return (ret);
}
