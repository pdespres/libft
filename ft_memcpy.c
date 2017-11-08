/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:16:34 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/08 12:28:38 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t	i;
	char	*cdst;
	char	*csrc;
	
	if (dst == src)
		return (dst);
	cdst = (char*)dst;
	csrc = (char*)src;
	i = 0;
	if (n == 0)
		return (dst);
	while (i <= n - 1)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
