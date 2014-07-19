/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:05:44 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/25 16:54:19 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *str)
{
	char		*dup;

	if (str == NULL)
		return (NULL);
	if ((dup = malloc(sizeof(char) * ft_strlen((char *)str + 1))) == NULL)
			return (NULL);
	dup = ft_memcpy(dup, str, ft_strlen((char *)str));
	return (dup);
}
