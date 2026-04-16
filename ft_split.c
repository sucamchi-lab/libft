/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:07:24 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:07:30 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s)
		{
			count++;
		}
		while (*s && *s != c)
		{
			s++;
		}
	}
	return (count);
}

static void	ft_free_split(char **arr, size_t used)
{
	size_t	i;

	i = 0;
	while (i < used)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*ft_word_dup(char const *start, size_t len)
{
	size_t	i;
	char	*word;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int	ft_fill_split(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (len > 0)
		{
			arr[i] = ft_word_dup(s, len);
			if (!arr[i++])
			{
				ft_free_split(arr, i - 1);
				return (-1);
			}
		}
		s += len;
	}
	arr[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
	{
		return (NULL);
	}
	arr = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
	{
		return (NULL);
	}
	if (ft_fill_split(arr, s, c) == -1)
	{
		return (NULL);
	}
	return (arr);
}

/*
#include <stdio.h>

int main(void)
{
	char **arr = ft_split("uno,dos,tres", ',');
	int i;

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
