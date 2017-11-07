/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:46:39 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/07 18:20:29 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	size_t	size;
	char	*copie;
	int		i;

	i = 0;
	size = ft_strlen(str);
	copie = (char*)malloc((size + 1) * sizeof(char));
	if (copie != NULL)
	{
		while (str[i] != '\0')
		{
			copie[i] = str[i];
			i++;
		}
		copie[i] = '\0';
	}
	return (copie);
}
