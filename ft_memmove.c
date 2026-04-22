/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:26:33 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/22 19:48:41 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				count;
	unsigned char		*ptr;
	const unsigned char	*str;

	if (!dest && !src)
		return (NULL);
	ptr = (unsigned char *)dest;
	str = (const unsigned char *)src;
	if (str < ptr && (str + len) > ptr)
	{
		while (len--)
			ptr[len] = str[len];
	}
	else
	{
		count = 0;
		while (count < len)
		{
			ptr[count] = str[count];
			count++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		dest[20] = "Hello, World!";
	const char	src[] = "42 is awesome!";
	size_t		len;
	char		dest2[20] = "Hello, World!";

	len = 15;
	printf("Before memmove: dest = '%s'\n", dest);
	ft_memmove(dest, src, len);
	printf("After ft_memmove: dest = '%s'\n", dest);
	memmove(dest2, src, len);
	printf("After standard memmove: dest2 = '%s'\n", dest2);
	return (0);
}
*/
