/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:32:43 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/20 14:32:57 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sub_len(size_t slen, unsigned int start, size_t len)
{
	if ((size_t)start >= slen)
	{
		return (0);
	}
	if (len > slen - start)
	{
		return (slen - start);
	}
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
	{
		return (NULL);
	}
	len = ft_sub_len(ft_strlen(s), start, len);
	if (len == 0)
	{
		return (ft_strdup(""));
	}
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*sub;

	sub = ft_substr("abcdef", 2, 3);
	if (!sub)
		return (1);
	printf("sub: %s\n", sub);
	free(sub);
	return (0);
}
*/
