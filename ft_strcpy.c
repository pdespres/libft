/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:00:29 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/09 10:38:51 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	if (src == NULL || dst == NULL)
		return (NULL);
	while (1 == 1)
	{
		dst[i] = src[i];
		if (src[i] == '\0')
			break ;
		else
			i++;
	}
	return (dst);
}
