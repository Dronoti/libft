/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:59:18 by bkael             #+#    #+#             */
/*   Updated: 2021/04/24 17:33:50 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] && d < dstsize)
		d++;
	if (d == dstsize)
		return (d + ft_strlen(src));
	while (src[s] && (dstsize > (d + s + 1)))
	{
		dst[d + s] = src[s];
		s++;
	}
	dst[d + s] = '\0';
	return (d + ft_strlen(src));
}
