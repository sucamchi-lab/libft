/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:06:14 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:06:20 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
#include <stdio.h>

int main(void)
{
	t_list *a = ft_lstnew("a");
	t_list *b = ft_lstnew("b");
	a->next = b;
	printf("size: %d\n", ft_lstsize(a));
	free(b);
	free(a);
	return (0);
}
*/
