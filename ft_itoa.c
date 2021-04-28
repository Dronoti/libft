/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 19:35:12 by bkael             #+#    #+#             */
/*   Updated: 2021/04/28 14:49:45 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		sing;

	sing = 1;
	len = ft_lennum(n);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		sing = -1;
		res[0] = '-';
	}
	if (n == 0)
		res[0] = '0';
	res[len] = '\0';
	len--;
	while (n)
	{
		res[len] = '0' + sing * (n % 10);
		n /= 10;
		len--;
	}
	return (res);
}
