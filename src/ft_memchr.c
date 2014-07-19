/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:04:19 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/25 16:52:56 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	if (str == NULL)
		return (NULL);
	while (n-- > 0)
	{
		if (*(const unsigned char *)str++ == (unsigned char)c)
			return ((void *)(str - 1));
	}
	return (NULL);
}
