/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:46:49 by bkael             #+#    #+#             */
/*   Updated: 2021/04/30 11:34:14 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countsplit(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	len;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		len = 0;
		while (s[i + len] && (s[i + len] != c))
			len++;
		if (len)
			count++;
		i += len;
	}
	return (count);
}

static void	ft_freearr(char **strsplit, size_t i)
{
	while (i >= 0)
	{
		free(strsplit[i]);
		i--;
	}
	free(strsplit);
	strsplit = NULL;
}

static void	ft_getarr(char **strsplit, char const *s, char c, size_t n)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	strsplit[n] = NULL;
	while (i < n)
	{
		while (s[start] && s[start] == c)
			start++;
		len = 0;
		while (s[start + len] && s[start + len] != c)
			len++;
		strsplit[i] = ft_substr(s, start, len);
		if (!strsplit[i])
		{
			ft_freearr(strsplit, i);
			return ;
		}
		start += len;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strsplit;
	size_t	n;

	if (!s)
		return (NULL);
	n = ft_countsplit(s, c);
	strsplit = (char **)malloc(sizeof(char *) * (n + 1));
	if (!strsplit)
		return (NULL);
	ft_getarr(strsplit, s, c, n);
	return (strsplit);
}
