/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:43:42 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/10 16:37:05 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list * elem))
{
	t_list	*list;
	t_list	*new;
	
	list = lst;
	while (list->next)
	{
		new = f(list);
		new = ft_lstnew(new->content, new->content_size);

		list = list->next;
	}
	return (new);
}
