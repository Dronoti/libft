/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:46:49 by bkael             #+#    #+#             */
/*   Updated: 2021/04/27 18:02:28 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countsplit(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static void	ft_freearr(char **strsplit, size_t i)
{
	while (i--)
		free(strsplit[i]);
	free(strsplit);
}

static char	**ft_getarr(char **strsplit, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	end = 0;
	while (s[end])
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		strsplit[i] = ft_substr(s, start, end - start + 1);
		if (!strsplit[i])
		{
			ft_freearr(strsplit, i);
			return (NULL);
		}
		i++;
	}
	strsplit[i] = NULL;
	return (strsplit);
}

char	**ft_split(char const *s, char c)
{
	char	**strsplit;

	strsplit = (char **)malloc(sizeof(char *) * ft_countsplit(s, c) + 1);
	if (!strsplit)
		return (NULL);
	strsplit = ft_getarr(strsplit, s, c);
	return (strsplit);
}
