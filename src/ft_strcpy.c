/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:21:18 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/25 16:52:45 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (*src != '\0')
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (dest);
}
