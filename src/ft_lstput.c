/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstput.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/10 18:21:14 by fgundlac          #+#    #+#             */
/*   Updated: 2014/02/10 18:25:07 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstput(t_List *lst)
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		ft_putstr(lst->content);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
	}
}
