/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:08:34 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:08:40 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && (i + j) < len
			&& big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
