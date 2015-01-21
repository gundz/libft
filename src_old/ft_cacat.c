/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cacat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 18:19:27 by fgundlac          #+#    #+#             */
/*   Updated: 2013/12/27 04:10:32 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>

int		get_cacat_len(va_list ap, int nb)
{
	va_list		ap2;
	int			l;
	int			i;

	l = i = 0;
	va_copy(ap2, ap);
	while (i++ < nb)
		l += ft_strlen(va_arg(ap2, char *));
	return (l);
}

char	*ft_cacat(int nb, ...)
{
	va_list		ap;
	char		*dest;
	int			i;
	int			j;
	char		*tmp;

	va_start(ap, nb);
	dest = (char *)malloc(sizeof(char) * get_cacat_len(ap, nb) + 1);
	i = 0;
	while (nb--)
	{
		j = 0;
		tmp = va_arg(ap, char *);
		if (tmp != NULL)
		{
			while (tmp[j] != '\0')
				dest[i++] = tmp[j++];
		}
	}
	dest[i] = '\0';
	va_end(ap);
	return (dest);
}
