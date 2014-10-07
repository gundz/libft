/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <fgundlac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 21:07:14 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/01 21:37:05 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (str == NULL || (*f) == NULL)
		return ;
	i = 0;
	while (*str != '\0')
	{
		(*f)(i, str);
		str++;
		i++;
	}
}
