/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_in_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 19:19:21 by fgundlac          #+#    #+#             */
/*   Updated: 2014/07/20 19:27:56 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_in_lst(t_List *lst,
					int (*fun_comp)(void *, void *), void *const b)
{
	while (lst != NULL)
	{
		if (fun_comp(lst->content, b) == 0)
			return (1);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
	}
	return (0);
}
