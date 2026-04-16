/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:50:05 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/16 13:50:29 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>

int main(void)
{
	char str[] = "Hello, World!";
	printf("Antes: %s\n", str);
	ft_bzero(str, 5);
	printf("Despues: %s\n", str);
	return (0);
}
*/
