/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:12:46 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/22 19:11:38 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	ft_free_words(char **split, int used)
{
	int	i;

	i = 0;
	while (i < used)
		free(split[i++]);
	free(split);
}

static int	ft_fill_words(char **split, char const *s, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (!s[j])
			break ;
		len = 0;
		while (s[j + len] && s[j + len] != c)
			len++;
		split[i] = ft_substr(s, j, len);
		if (!split[i])
			return (ft_free_words(split, i), -1);
		i++;
		j += len;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (ft_fill_words(split, s, c) < 0)
		return (NULL);
	split[ft_count_words(s, c)] = NULL;
	return (split);
}

/* #include <stdio.h>
int	main(void)
{
	char	**split = ft_split("hola que tal", ' ');
	int	i = 0;

	while (split[i])
	{
		printf("%s", split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
} */
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
