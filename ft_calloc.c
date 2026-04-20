/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:08:43 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/20 11:08:45 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > ((size_t)-1) / size)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
	}
	else
	{
		ptr = malloc(nmemb * size);
	}
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, nmemb * size);
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
