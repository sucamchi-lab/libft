/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:26:33 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/23 15:50:34 by scamlett         ###   ########.fr       */
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
	const char	src[] = "cacaculo123";
	size_t		len;
	char		dest2[20] = "Hello, World!";

	len = 15;
	printf("%s\n", ft_memmove(dest, src, len));
	printf("%s\n", ft_memmove(dest2, src, len));
}
*/
