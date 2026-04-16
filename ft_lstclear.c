/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:05:32 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:05:38 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
	{
		return ;
	}
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

int main(void)
{
	t_list *a = ft_lstnew(ft_strdup("a"));
	t_list *b = ft_lstnew(ft_strdup("b"));
	a->next = b;
	ft_lstclear(&a, del);
	printf("Lista limpia: %p\n", (void *)a);
	return (0);
}
*/
