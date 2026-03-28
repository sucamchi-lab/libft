/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:06:42 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:06:48 by scamlett         ###   ########.fr       */
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
