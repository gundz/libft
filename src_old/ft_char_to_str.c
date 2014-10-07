/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/13 13:54:11 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/13 13:56:51 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

char	*char_to_str(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(sizeof(char *) * 1 + 1);
	str[i] = c;
	i++;
	str[i] = '\0';
	return (str);
	ft_putstr(str);
}
