/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkael <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:46:49 by bkael             #+#    #+#             */
/*   Updated: 2021/05/04 11:18:30 by bkael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countsplit(char const *s, char c)
{
	size_t	j;
	size_t	count;
	size_t	len;

	j = 0;
	count = 0;
	while (s[j] != '\0')
	{
		while (s[j] && s[j] == c)
			j++;
		len = 0;
		while (s[j + len] && (s[j + len] != c))
			len++;
		if (!len)
			return (count);
		count++;
		j += len;
	}
	return (count);
}

static void	ft_freearr(char ***strsplit, size_t i)
{
	size_t	k;

	k = 0;
	while (k < i)
	{
		free(*strsplit + i);
		i++;
	}
	free(*strsplit);
	*strsplit = NULL;
}

static void	ft_getarr(char **strsplit, char const *s, char c, size_t n)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
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
			ft_freearr(&strsplit, i);
			break ;
		}
		start += len;
		i++;
	}
	if (i == n)
		strsplit[n] = NULL;
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
