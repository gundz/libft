/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 17:38:11 by fgundlac          #+#    #+#             */
/*   Updated: 2014/01/22 03:30:11 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*fresh;
	size_t		i;

	if (s == NULL)
		return (NULL);
	if (!(fresh = (char *)malloc(sizeof(*fresh) * len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		fresh[i] = s[i + start];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
