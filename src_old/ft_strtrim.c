/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 19:40:27 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/25 22:50:27 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

char	*ft_strtrim(char const *str)
{
	char	*trim;
	int		i;
	int		j;
	int		k;

	if (str == NULL)
		return (NULL);
	trim = malloc(sizeof(char) * ft_strlen((char *)str));
	i = 0;
	j = ft_strlen((char *)str) - 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
		j--;
	k = 0;
	while (i <= j)
	{
		trim[k] = str[i];
		k++;
		i++;
	}
	trim[k] = '\0';
	return (trim);
}
