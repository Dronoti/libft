/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:02:40 by bkael             #+#    #+#             */
/*   Updated: 2021/04/28 19:11:10 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*maplst;
	t_list	*elem;

	if (!lst || !f || !del)
		return (NULL);
	maplst = NULL;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		ft_lstadd_back(&maplst, elem);
		if (!elem)
		{
			ft_lstclear(&maplst, del);
			break ;
		}
		lst = lst->next;
	}
	return (maplst);
}
