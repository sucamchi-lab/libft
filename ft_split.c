/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:12:46 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/21 15:39:16 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	ft_free_words(char **split, size_t used)
{
	while (used > 0)
		free(split[--used]);
	free(split);
}

static int	ft_add_word(char **split, size_t *i, char const **s, char c)
{
	char const	*start;
	size_t		len;

	while (**s && **s == c)
		(*s)++;
	if (!**s)
		return (0);
	start = *s;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	split[*i] = ft_substr(start, 0, len);
	if (!split[*i])
		return (-1);
	*s += len;
	(*i)++;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		status;
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	status = 1;
	while (status > 0)
	{
		status = ft_add_word(split, &i, &s, c);
	}
	if (status < 0)
	{
		ft_free_words(split, i);
		return (NULL);
	}
	split[i] = NULL;
	return (split);
}

/*
#include <stdio.h>

int	main(void)
{
	char	**arr;
	int		i;

	arr = ft_split("uno dos tres", ' ');
	if (!arr)
		return (1);
	i = 0;
	while (arr[i])
	{
		printf("arr[%d]: %s\n", i, arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
