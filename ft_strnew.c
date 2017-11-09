/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:10:40 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/09 14:36:09 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[size + 1] = '\0';
	ft_strclr(str);
	return (str);
}
