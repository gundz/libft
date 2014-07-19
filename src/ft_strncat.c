/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:33:38 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/01 21:49:19 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*tmp;

	if (dest == NULL || src == NULL)
		return (NULL);
	tmp = dest;
	while (*dest)
		dest++;
	while (n-- > 0 && *src != '\0')
	{
		if (!(*dest++ = *src++))
			return (tmp);
	}
	*dest = '\0';
	return (tmp);
}
