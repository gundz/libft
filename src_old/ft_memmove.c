/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:03:49 by fgundlac          #+#    #+#             */
/*   Updated: 2013/11/25 16:53:07 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*tmps1;
	const char	*tmps2;

	tmps1 = s1;
	tmps2 = s2;
	if (s1 <= s2)
		return (ft_memcpy(s1, s2, n));
	tmps1 = tmps1 + n;
	tmps2 = tmps2 + n;
	while (n--)
	{
		*(--tmps1) = *(--tmps2);
	}
	return (s1);
}
