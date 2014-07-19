/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:42:32 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/14 00:56:27 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;

	if (s == NULL)
		return (NULL);
	if (n > 0)
	{
		tmp = s;
		while (n--)
		{
			*tmp++ = c;
		}
	}
	return (s);
}
