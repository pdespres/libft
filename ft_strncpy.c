/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:26:16 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/08 14:26:47 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= (len - 1))
	{
		dst[i] = src[i];
		if (src[i] == '\0')
		{
			i++;
			while (i <= len)
			{
				dst[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dst);
}
