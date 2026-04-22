/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:52:31 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/21 14:52:31 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
#include <stdio.h>

static void	del(void *p)
{
	free(p);
}

int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew(ft_strdup("a"));
	b = ft_lstnew(ft_strdup("b"));
	a->next = b;
	ft_lstclear(&a, del);
	printf("Lista limpia: %p\n", (void *)a);
	return (0);
}
*/
