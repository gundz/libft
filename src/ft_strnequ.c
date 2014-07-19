/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 21:59:36 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/01 21:40:52 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t size)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (*s1 != '\0' && s2 != '\0' && size-- > 0)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}
