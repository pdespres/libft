/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:35:27 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/08 14:19:17 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t			i;
	char			*cdst;
	char			*csrc;
	unsigned char	uc;

	cdst = (char*)dst;
	csrc = (char*)src;
	uc = (unsigned char) c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i <= n - 1)
	{
		if (csrc[i] == uc)
			return (dst + i + 1);
		else
			cdst[i] = csrc[i];
		i++;
	}
	return (NULL);
}
