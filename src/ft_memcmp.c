/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:26:26 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/22 21:12:42 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	tmp1;
	unsigned char	tmp2;

	if (s1 == NULL || s2 == NULL || s1 == s2)
		return (0);
	while (n-- > 0)
	{
		tmp1 = *(unsigned char *)s1;
		tmp2 = *(unsigned char *)s2;
		if (tmp1 != tmp2)
			return (tmp1 - tmp2);
		s1++;
		s2++;
	}
	return (0);
}
