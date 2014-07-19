/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 20:45:20 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/01 20:45:37 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_countwords(char const *str, int c)
{
	size_t		nb_words;
	size_t		i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	nb_words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			if (str[i] == c || str[i] == '\0')
				nb_words++;
		}
	}
	return (nb_words);
}
