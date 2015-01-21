/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 18:30:20 by fgundlac          #+#    #+#             */
/*   Updated: 2014/11/11 18:34:53 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stddef.h>

static void				swap_list(t_list *lst1, t_list *lst2)
{
	void				*tmp;

	tmp = lst1->data;
	lst1->data = lst2->data;
	lst2->data = tmp;
}

void					lst_sort(t_list **lst, int (*cmp)(), const int rev)
{
	t_list				*lstwalker;
	t_list				*root;
	int					ret;

	lstwalker = *lst;
	while (lstwalker != NULL)
	{
		root = *lst;
		while (root != NULL)
		{
			if (root->next != NULL)
			{
				ret = cmp(root->data, root->next->data);
				if (rev == 1 && ret < 0)
					swap_list(root, root->next);
				else if (rev == 0 && ret > 0)
					swap_list(root, root->next);
			}
			else
				break ;
			root = root->next;
		}
		if (lstwalker->next == NULL)
			break ;
		lstwalker = lstwalker->next;
	}
}
