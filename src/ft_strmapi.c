/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 22:24:56 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/24 22:35:12 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (str == NULL || (*f) == NULL)
		return (NULL);
	if (!(ft_strlen((char *)str)))
		return (NULL);
	result = malloc(sizeof(char) * ft_strlen((char *)str));
	i = 0;
	while (str[i] != '\0')
	{
		result[i] = (*f)(i, str[i]);
		i++;
	}
	return (result);
}
