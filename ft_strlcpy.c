/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:08:06 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:08:12 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size != 0)
	{
		i = 0;
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>

int main(void)
{
	char dst[6];
	size_t len = ft_strlcpy(dst, "abcdef", sizeof(dst));
	printf("dst: %s | len: %zu\n", dst, len);
	return (0);
}
*/
