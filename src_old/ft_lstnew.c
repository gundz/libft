/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/21 21:49:41 by fgundlac          #+#    #+#             */
/*   Updated: 2014/03/14 08:06:20 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_List		*ft_lstnew(void *content, int size)
{
	t_List		*newlst;

	newlst = NULL;
	if ((newlst = (t_List *)malloc(sizeof(t_List))))
	{
		newlst->next = NULL;
		newlst->content = content;
		newlst->size = size;
	}
	return (newlst);
}
