* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:04:42 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/09 13:47:35 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	cal_rec(long int a, char *str, int *i)
{
	long int	div;
	int			mod;

	div = a / 10;
	mod = a % 10;
	if (div > 9)
		cal_rec(div, &str, i);
	str[*i] = mod;
	*i++;
}

char	*ft_itoa(int n)
{
	long int	a;
	char		str[12];
	int			ind;

	a = (long int) n;
	ind = 0;
	if (a < 0)
	{
		str[0] = '-';
		ind = 1;
	}
	cal_rec(a, &str, &ind);
	str[ind] = '\0';
}
