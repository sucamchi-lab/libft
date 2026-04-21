/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:54:32 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/21 14:54:33 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>

static void	print_node(void *p)
{
	printf("%s\n", (char *)p);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("uno");
	b = ft_lstnew("dos");
	a->next = b;
	ft_lstiter(a, print_node);
	free(b);
	free(a);
	return (0);
}
*/
