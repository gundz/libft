#include "get_next_line.h"
#include <stdio.h>
#include <libft.h>

#include <string.h>

#include <stdlib.h>

char *
extract(char *buf, char **line)
{
	int				i;
	char			*tmp;

	i = 0;
	while (buf[i] != '\0' && buf[i] != '\n')
		i++;
	*line = ft_strsub(buf, 0, i);
	tmp = buf;
	buf = ft_strsub(buf, i + 1, ft_strlen(buf) - i);
	free(tmp);
	return (buf);
}

int
get_next_line(const int fd, char **line)
{
	int				ret;
	static char		*buf = "";
	char			tmp[BUF_SIZE + 1];
	char			*tmp2;

	if (line == NULL)
		return (-1);
	ret = 1;
	while (ret > 0)
	{
		if (ft_strchr(buf, '\n') != NULL)
		{
			buf = extract(buf, line);
			return (1);
		}
		if ((ret = read(fd, &tmp, BUF_SIZE)) == -1)
			return (-1);
		tmp[ret] = '\0';
		if (ret > 0)
		{
			tmp2 = buf;
			buf = ft_strjoin(buf, tmp);
			if (tmp2[0] != '\0')
				free(tmp2);
		}
		if (ret == 0 && ft_strlen(buf) > 0)
		{
			buf = extract(buf, line);
			return (1);
		}
	}
	return (ret);
}
