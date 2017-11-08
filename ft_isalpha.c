/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:30:42 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/08 11:46:02 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <limits.h>

int		ft_isalpha(int c)
{
	return (MAX(ft_islower(c), ft_isupper(c)));
}

int		main(void)
{
/*	printf("%s\n", setlocale(LC_CTYPE, "tr_TR.UTF-8"));*/
/*	printf("%d\n", isalpha(199));*/
	char	*tst;

	printf("%d\n", INT_MAX);
	tst = (char*)malloc(sizeof(char) * (INT_MAX + 1));
	if (tst == NULL)
	{
		printf("plantage reussi!\n");
		return (0);
	}
	else
		free(tst);
	return(0);
}
