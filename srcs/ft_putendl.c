#include <unistd.h>

void					ft_putendl(const char *const str)
{
	unsigned int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
	write(1, "\n", 1);
}
