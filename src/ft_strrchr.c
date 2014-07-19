/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:35:10 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/01 21:41:29 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int		i;

	if (src == NULL)
		return (NULL);
	i = ft_strlen((char *)src);
	while (i >= 0)
	{
		if (src[i] == (char)c)
			return ((char *)src + i);
		i--;
	}
	return (NULL);
}
