/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:48:51 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/08 14:21:17 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;
	size_t			i;
	char			*cs1;
	char			*cs2;

	if (n == 0)
		return (0);
	i = 0;
	cs1 = (char*) s1;
	cs2 = (char*) s2;
	while (i <= n && c1 == c2)
	{
		c1 = cs1[i];
		c2 = cs2[i];
		i++;
	}
	return (c1 - c2);
}
