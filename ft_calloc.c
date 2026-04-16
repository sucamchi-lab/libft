/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:04:29 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:04:35 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > ((size_t)-1) / size)
	{
		return (NULL);
	}
	if (count == 0 || size == 0)
	{
		ptr = malloc(1);
	}
	else
	{
		ptr = malloc(count * size);
	}
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include <stdio.h>

int main(void)
{
	int *arr = ft_calloc(4, sizeof(int));
	if (!arr)
		return (1);
	printf("arr[0]=%d arr[3]=%d\n", arr[0], arr[3]);
	free(arr);
	return (0);
}
*/
