/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 23:31:01 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/01 23:31:03 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	const char	*tmps1;
	const char	*tmps2;

	if (s2[0] == '\0')
		return ((char *)s1);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (*s1 != '\0' && *s2 != '\0')
	{
		tmps1 = s1;
		tmps2 = s2;
		while ((*tmps2 != '\0') && (*tmps1 == *tmps2))
		{
			tmps1++;
			tmps2++;
		}
		if (*tmps2 == '\0')
			return ((char *)s1);
		else
			s1++;
	}
	return (NULL);
}
