/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 21:57:47 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/24 22:16:02 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

char	*ft_strmap(char const *str, char (*f)(char))
{
	char	*result;
	int		i;

	if (str == NULL || (*f) == NULL)
		return (NULL);
	if (!(ft_strlen((char *)str)))
		return (NULL);
	result = malloc(sizeof(char) * ft_strlen((char *)str));
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = (*f)(str[i]);
		i++;
	}
	return (result);
}
