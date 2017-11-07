/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:46:25 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/07 18:48:03 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	size_t	i;

	if (c < 0 || c > 255)
		return (NULL);
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return (s + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
