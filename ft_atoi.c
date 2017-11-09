/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:18:44 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/09 17:54:42 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_firstnum(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			return (i);
		}
		else if (!(str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
					str[i] == '\r' || str[i] == '\t' || str[i] == '\v' ||
					str[i] == '+' || str[i] == '-'))
		{
			return (-1);
		}
		if ((str[i] == '+' || str[i] == '-'))
		{
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			{
				return (-1);
			}
		}
		i++;
	}
	return (-1);
}

int			ft_atoi(const char *str)
{
	long	iresultat;
	int		i;
	int		isigne;

	iresultat = 0;
	isigne = 1;
	i = ft_firstnum(str);
	if (i == -1)
	{
		return (0);
	}
	if (i > 0 && str[i - 1] == '-')
	{
		isigne = -1;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		iresultat = iresultat * 10;
		iresultat += str[i] - '0';
		if (iresultat > 2147483648)
			return (-1 * isigne);
		i++;
	}
	return ((int)(iresultat * isigne));
}

int		main(void)
{
	char	tab[40] = "-3000000000";
	printf("%d\n", atoi(tab));
}
