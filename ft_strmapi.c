/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:08:20 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:08:26 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
	{
		return (NULL);
	}
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

static char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char *res = ft_strmapi("abcdef", to_upper_even);
	if (!res)
		return (1);
	printf("strmapi: %s\n", res);
	free(res);
	return (0);
}
*/
