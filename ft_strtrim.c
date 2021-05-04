/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:29:42 by bkael             #+#    #+#             */
/*   Updated: 2021/05/04 12:30:07 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	end = i;
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	start = i;
	if (start >= end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start + 1));
}
