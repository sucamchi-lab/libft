/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:26:33 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/20 13:26:33 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy_forward(char *d, const char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
}

static void	ft_copy_backward(char *d, const char *s, size_t len)
{
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (!dest && !src)
	{
		return (NULL);
	}
	d = (char *)dest;
	s = (const char *)src;
	if (d < s)
	{
		ft_copy_forward(d, s, len);
	}
	else
	{
		ft_copy_backward(d, s, len);
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[20] = "123456789";

	ft_memmove(str + 2, str, 5);
	printf("Resultado: %s\n", str);
	return (0);
}
*/
