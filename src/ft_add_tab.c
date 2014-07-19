/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 15:59:34 by fgundlac          #+#    #+#             */
/*   Updated: 2014/01/22 01:19:43 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	**ft_add_tab(char **tab, char *str)
{
	int		tablen;
	char	**new;
	int		i;
	int		len;

	tablen = ft_tablen(tab);
	new = (char **)malloc(sizeof(char *) * tablen + 2);
	i = 0;
	while (i < tablen)
	{
		len = ft_strlen(tab[i]);
		new[i] = (char *)malloc(sizeof(char) * len + 1);
		new[i] = ft_strcpy(new[i], tab[i]);
		free(tab[i]);
		i++;
	}
	new[i] = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	new[i] = ft_strcpy(new[i], str);
	new[i + 1] = '\0';
	return (new);
}
