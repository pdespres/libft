/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:46:18 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/08 12:35:07 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_overlap(void *dst, void *src, size_t len)
{
	if (dst == src)
		return (3);
	else if (dst + len >= src)
		return (1);
	else if (src + len >= dst)
		return (2);
	else
		return (0);
}

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;
	int		j;
	char	*cdst;
	char	*csrc;

	if (len == 0)
		return (dst);
	j = ft_overlap(dst, src);
	if (j == 0 || j == 1)
		ft_memcpy(dst, src, len);
	else if (j == 2)
	{
		cdst = (char*)dst;
		csrc = (char*)src;
		i = len - 1;
		while (i >= 0)
		{
			cdst[i] = csrc[i];
			if (i == 0)
				break ;
			i--;
		}
	}
	return (dst);
}
