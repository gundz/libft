/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/26 00:49:49 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/27 00:58:09 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_intab(char **tab, char *str)
{
	int		i;

	if (tab == NULL || str == NULL)
		return (0);
	i = 0;
	while (tab[i] != '\0')
	{
		if (ft_strcmp(tab[i], str) == 0)
			return (i);
		i++;
	}
	return (0);
}
