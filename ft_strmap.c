/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:53:00 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/08 21:10:39 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(s[i]);
		i++;
	}
	return (ft_strdup(s));
}