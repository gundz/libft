/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:30:31 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/25 16:53:53 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strchr(const char *src, int c)
{
	while (*src != c)
	{
		if (*src == '\0')
			return (NULL);
		src++;
	}
	return ((char *)src);
}
