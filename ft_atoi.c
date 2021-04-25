/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 15:58:13 by bkael             #+#    #+#             */
/*   Updated: 2021/04/24 18:35:02 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int     ft_isspace(int c)
{
        if (c == ' ' || (c >= 9 && c <= 13))
                return (1);
        return (0);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				num;
	int				sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
