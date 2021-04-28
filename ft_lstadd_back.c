/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:45:26 by bkael             #+#    #+#             */
/*   Updated: 2021/04/28 19:07:03 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (new)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		back = *lst;
		while (back->next)
			back = back->next;
		back->next = new;
	}
}
