/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgundlac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/20 19:51:18 by fgundlac          #+#    #+#             */
/*   Updated: 2014/07/20 20:59:04 by fgundlac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				get_max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}