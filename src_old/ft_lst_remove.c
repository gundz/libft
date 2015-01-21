/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_from_lst.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 18:04:15 by fgundlac          #+#    #+#             */
/*   Updated: 2014/07/20 18:05:58 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_List				*ft_lst_remove(t_List *lst,
						int (*comp_fun)(void *, void *), void *const b)
{
	t_List			*tmp;
	t_List			*previous;

	if (lst == NULL)
		return (lst);
	previous = lst;
	if (comp_fun(previous->content, b) == 0)
	{
		lst = previous->next;
		return (lst);
	}
	tmp = previous->next;
	while (tmp != NULL)
	{
		if (comp_fun(tmp->content, b) == 0)
		{
			previous->next = tmp->next;
			return (lst);
		}
		previous = tmp;
		tmp = tmp->next;
	}
	return (lst);
}
