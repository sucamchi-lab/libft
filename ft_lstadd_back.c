/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:05:18 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:05:24 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
	{
		return ;
	}
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
#include <stdio.h>

int main(void)
{
	t_list *a = ft_lstnew("a");
	t_list *b = ft_lstnew("b");
	ft_lstadd_back(&a, b);
	printf("last: %s\n", (char *)ft_lstlast(a)->content);
	free(b);
	free(a);
	return (0);
}
*/
