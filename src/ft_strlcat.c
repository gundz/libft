/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:01:06 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/01 20:37:37 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t		ft_strlcat(char *dest, char *src, size_t size)
{
	char		*tmp_dest;
	const char	*tmp_src;
	size_t		n;
	size_t		dlen;

	tmp_dest = dest;
	tmp_src = src;
	n = size;
	while (n-- > 0 && *tmp_dest != '\0')
		tmp_dest++;
	dlen = tmp_dest - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen((char *)tmp_src));
	while (*tmp_src != '\0')
	{
		if (n != 1)
		{
			*tmp_dest++ = *tmp_src;
			n--;
		}
		tmp_src++;
	}
	*tmp_dest = '\0';
	return (dlen + (tmp_src - src));
}
