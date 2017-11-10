/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:39:23 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/10 16:20:37 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;

	if (alst == NULL || *alst == NULL || del == NULL)
		return ;
	lst = *alst;
	while (lst->next)
	{
		del(lst, lst->content_size);
		free(*alst);
		lst = lst->next;
	}
	alst = NULL;
}
