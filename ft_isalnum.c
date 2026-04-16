/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:04:36 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:04:42 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	printf("ft_isalnum('B') = %d\n", ft_isalnum('B'));
	printf("ft_isalnum('@') = %d\n", ft_isalnum('@'));
	return (0);
}
*/
