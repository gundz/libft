/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 16:00:48 by fgundlac          #+#    #+#             */
/*   Updated: 2014/01/21 20:22:47 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_puttab(char **tab)
{
	int		i;

	if (tab == NULL)
		return ;
	i = 0;
	while (i < ft_tablen(tab))
	{
		ft_putstr("[");
		ft_putnbr(i);
		ft_putstr("]\n-----\n\t");
		ft_putstr(tab[i]);
		ft_putstr("\n-----\n");
		i++;
	}
}
