/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:08:43 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/23 15:43:53 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;

	arr = ft_calloc(4, sizeof(int));
	if (!arr)
		return (1);
	printf("arr[0]=%d arr[3]=%d\n", arr[0], arr[3]);
	free(arr);
	return (0);
}
*/
