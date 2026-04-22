/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:08:43 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/22 19:23:58 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*array;
	size_t	total;

	if (size != 0 && number > ((size_t)-1) / size)
		return (NULL);
	total = number * size;
	if (total == 0)
		total = 1;
	array = malloc(total);
	if (!array)
		return (NULL);
	ft_bzero(array, total);
	return (array);
}
