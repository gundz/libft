/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 23:30:30 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/01 23:30:33 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	if ((int *)dest == NULL || (int  *)src == NULL)
		return (NULL);
	if (n > 0)
	{
		while (n--)
		{
			*(char *)dest = *(char *)src;
			if (*(char *)src == c)
				return (dest + 1);
			dest++;
			src++;
		}
	}
	return (NULL);
}
