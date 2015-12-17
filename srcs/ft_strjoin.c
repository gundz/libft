/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 18:29:54 by fgundlac          #+#    #+#             */
/*   Updated: 2014/11/11 18:29:55 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char							*ft_strjoin(char *dest, char *src)
{
	const int		size = ft_strlen(dest) + ft_strlen(src) + 1;
	char			*ret;
	int				i;
	int				j;

	if (!(ret = (char *)malloc(sizeof(char) * (size))))
		return (NULL);
	j = 0;
	i = 0;
	while (dest[i] != '\0')
		ret[j++] = dest[i++];
	i = 0;
	while (src[i] != '\0')
		ret[j++] = src[i++];
	ret[j] = '\0';
	return (ret);
}
