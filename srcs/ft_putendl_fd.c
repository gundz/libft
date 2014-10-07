#include <unistd.h>

void					ft_putendl_fd(const char *const str, int fd)
{
	unsigned int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(fd, str, len);
	write(fd, "\n", 1);
}
