/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 14:00:10 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/22 21:11:51 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	get_int_len(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n == 0)
		return (1);
//	if (n == -2147483648)
//		return (11);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*str;

	str = ft_strnew(get_int_len(n) + 1);
	i = 0;
	if (n == 0)
		return (char_to_str('0'));
//	if (n == -2147483648)
//		return ("-2147483648");
	sign = n;
	if ((sign = n) && n < 0)
		n = -n;
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	if (sign < 0)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

char	*ft_uitoa(unsigned int n)
{
	int				i;
	char			*str;

	str = ft_strnew(12);
	i = 0;
	if (n == 0)
		return (char_to_str('0'));
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}

char	*ft_bitoa(unsigned int n, int base)
{
	int				i;
	char			*str;

	str = ft_strnew(20);
	i = 0;
	if (n == 0)
		return (char_to_str('0'));
	while (n > 0)
	{
		str[i++] = n % base + '0';
		n /= base;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
