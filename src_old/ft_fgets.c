/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fgets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 20:58:47 by fgundlac          #+#    #+#             */
/*   Updated: 2014/01/21 19:04:46 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>

char	*ft_fgets(void)
{
	char	*buf;
	char	*save;
	int		ret;

	buf = ft_strnew(BUFF_SIZE + 1);
	save = ft_strnew(BUFF_SIZE + 1);
	while ((ret = read(0, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		save = ft_cacat(2, save, buf);
		if (save[ft_strlen(save) - 1] == '\n')
		{
			save[ft_strlen(save) - 1] = '\0';
			return (save);
		}
	}
	return (save);
}
