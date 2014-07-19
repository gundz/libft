/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:54:32 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/13 20:53:13 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	result = malloc(sizeof(char) *
			(ft_strlen((char *)s1 + ft_strlen((char *)s2) + 1)));
	while (*s1 != '\0')
		result[i++] = *s1++;
	while (*s2 != '\0')
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}
