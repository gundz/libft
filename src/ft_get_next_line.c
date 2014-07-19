/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 03:58:34 by rdavid            #+#    #+#             */
/*   Updated: 2014/01/09 02:31:52 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>
#include <unistd.h>

static char		*ft_realloc(char *array, int newlen)
{
	char		*new;

	if (!(new = (char *)malloc(sizeof(char) * newlen)))
		return (NULL);
	ft_bzero(new, newlen);
	ft_strcpy(new, array);
	free(array);
	return (new);
}

static int		fill_buff(int const fd, t_jret *val, char **line, char *buf)
{
	int			i;

	i = 1;
	while (!(val->ret < BUFF_SIZE
			|| ft_strnstr(buf + val->j, "\n", BUFF_SIZE - val->j) != 0)
			|| val->j >= BUFF_SIZE)
	{
		ft_strncat(*line, buf + val->j, val->ret - val->j);
		val->j = 0;
		i++;
		if (!(*line = ft_realloc(*line, i * BUFF_SIZE + 1)))
			return (-1);
		ft_bzero(buf, BUFF_SIZE);
		if ((val->ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (-1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static t_jret	val = { 0, 0 };
	static char		buf[BUFF_SIZE] = { 0 };

	if (!(*line = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	if (1 + (**line = 0) && !(*buf))
	{
		if ((val.ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (-1);
	}
	if ((fill_buff(fd, &val, line, buf)) == -1)
		return (-1);
	if (ENDL)
	{
		ft_strncat(*line, buf + val.j, ENDL - buf - val.j);
		val.j = ENDL - buf + 1;
	}
	else if (val.ret >= 1 && val.j != val.ret)
	{
		ft_strncat(*line, buf + val.j, ENDL - buf - val.j);
		val.j = val.ret;
	}
	else if (1 + (val.ret = val.j = 0))
		ft_bzero(buf, BUFF_SIZE);
	return ((val.ret >= 1 ? 1 : val.ret));
}
