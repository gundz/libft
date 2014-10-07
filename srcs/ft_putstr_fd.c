#include <unistd.h>

void					ft_putstr_fd(const char *const str, int fd)
{
	unsigned int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(fd, str, len);
}
