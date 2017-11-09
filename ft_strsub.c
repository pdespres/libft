/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:09:54 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/09 10:21:57 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*copie;

	copie = (char*)malloc((len  + 1) * sizeof(char));
	if (copie == NULL)
		return (NULL);
	return (ft_strncpy(copie, s + start, len));
}
