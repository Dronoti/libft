/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:09:47 by bkael             #+#    #+#             */
/*   Updated: 2021/05/04 12:47:46 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*prev;

	if (lst && del)
	{
		current = *lst;
		while (current)
		{
			prev = current;
			del(current->content);
			current = current->next;
			free(prev);
		}
		*lst = NULL;
	}
}
