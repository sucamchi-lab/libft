/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:26:33 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/25 20:42:57 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies memory safely even if regions overlap.
 * If dest overlaps src, copies backwards to avoid overwriting:
 *
 * Example:
 *   Before: [A][B][C][D][E][F][G][H]
 *   ft_memmove(&arr[2], &arr[0], 4);
 *   After:  [A][B][A][B][C][D][G][H]
 *
 * If copied forwards, data would be corrupted and overwritten.
 */

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

int	main(void)
{
	char	text[20] = "ABCDEFGH";

	printf("%s\n", text);
	ft_memmove(&text[2], &text[0], 4);
	printf("%s\n", text);
	return (0);
}
*/
