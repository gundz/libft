#include <stddef.h>

unsigned int				ft_ctablen(const char **const tab)
{
	unsigned int			len;

	len = 0;
	while (tab[len] != NULL)
		len++;
	return (len);
}
