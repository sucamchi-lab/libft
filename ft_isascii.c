/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:10:50 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/20 11:10:51 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("ft_isascii(65) = %d\n", ft_isascii(65));
	printf("ft_isascii(200) = %d\n", ft_isascii(200));
	return (0);
}
*/
