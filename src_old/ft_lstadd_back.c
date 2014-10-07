/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/22 00:14:35 by fgundlac          #+#    #+#             */
/*   Updated: 2014/01/23 00:25:59 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstadd_back(t_List **lst, t_List *new)
{
	t_List		*lstwalker;

	if (*lst == NULL)
		*lst = new;
	else
	{
		lstwalker = *lst;
		while (lstwalker->next != NULL)
			lstwalker = lstwalker->next;
		lstwalker->next = new;
	}
}
