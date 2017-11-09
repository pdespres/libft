/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:35:20 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/09 14:41:49 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char	uc;
	size_t			i;
	char			*cs;

	if (n == 0)
		return (NULL);
	uc = (unsigned char)c;
	cs = (char*)s;
	i = 0;
	while (i <= n - 1)
	{
		if (cs[i] == uc)
			return (s + i);
		i++;
	}
	return (NULL);
}
