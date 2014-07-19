/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_uniq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 16:00:58 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/29 16:00:59 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	**ft_str_uniq(char **tab)
{
	char		**new_tab;
	int		i;
	int		count;

	i = count = 0;
	new_tab = (char **)malloc(sizeof(char *) * ft_tablen(tab) + 1);
	while (tab[i++] != '\0')
	{
		if (ft_intab(new_tab, tab[i]) == 0)
			new_tab[count++] = tab[i];
	}
	new_tab[count] = '\0';
	return (new_tab);
}
