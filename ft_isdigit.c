/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:04:57 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:05:03 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
	printf("ft_isdigit('x') = %d\n", ft_isdigit('x'));
	return (0);
}
*/
