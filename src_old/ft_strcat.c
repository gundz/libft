/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:24:01 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/25 16:54:26 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[i++] = *src++;
	}
	dest[i] = '\0';
	return (dest);
}
