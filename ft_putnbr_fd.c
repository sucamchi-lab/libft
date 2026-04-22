/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:29:48 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/21 12:19:14 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd((int)(nb / 10), fd);
	ft_putchar_fd((char)(nb % 10 + '0'), fd);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Salida esperada: -1234\n");
	ft_putnbr_fd(-1234, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
