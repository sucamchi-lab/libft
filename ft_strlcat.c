/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:15:18 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/23 15:59:54 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	slen = ft_strlen(src);
	while (dst[dlen] && dlen < size)
		dlen++;
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] && (dlen + i + 1) < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[12] = "Hola";
	size_t	len;

	len = ft_strlcat(dst, "42", sizeof(dst));
	printf("dst: %s | len: %zu", dst, len);
	return (0);
}
*/
