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
