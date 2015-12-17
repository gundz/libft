#include <get_next_line.h>
#include <libft.h>
#include <stdlib.h>

char *
extract(char *buf, char **line)
{
	int				i;
	char			*tmp;

	i = 0;
	while (buf[i] != '\0' && buf[i] != '\n')
		i++;
	tmp = buf;
	*line = ft_strsub(buf, 0, i);
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

	ret = (line == NULL) ? -1 : 1;
	while (ret > 0)
	{
		ret = read(fd, &tmp, BUF_SIZE);
		tmp[ret] = '\0';
		if (ret > 0)
		{
			tmp2 = buf;
			buf = ft_strjoin(buf, tmp);
			if (tmp2[0] != '\0')
				free(tmp2);
		}
		if (ft_strchr(buf, '\n') || (ret == 0 && ft_strlen(buf) > 0))
		{
			buf = extract(buf, line);
			return (1);
		}
	}
	return (ret);
}
