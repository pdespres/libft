/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:16:24 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/07 17:18:27 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	i = 0;
	c1 = s1[i];
	c2 = s2[i];
	while (c1 != '\0' && c2 != '\0' && c1 == c2 && i < n)
	{
		i++;
		c1 = s1[i];
		c2 = s2[i];
	}
	return (c1 - c2);
}
