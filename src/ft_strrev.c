/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 14:57:24 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/22 21:16:56 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrev(char *str)
{
	char		*rev;
	size_t		len;
	int			i;

	i = 0;
	len = ft_strlen(str);
	rev = ft_strnew(len + 1);
	while (len--)
	{
		rev[i] = str[len];
		i++;
	}
	rev[i] = '\0';
	return (rev);
}
