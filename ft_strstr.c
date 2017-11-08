/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:54:29 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/08 14:49:26 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *tofind)
{
	size_t i;
	size_t j;

	i = 0;
	if (tofind[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == tofind[j])
		{
			j++;
			if (tofind[j] == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (NULL);
}
