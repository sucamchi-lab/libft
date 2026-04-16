/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:05:46 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:05:52 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
	{
		return ;
	}
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

int main(void)
{
	t_list *a = ft_lstnew("uno");
	t_list *b = ft_lstnew("dos");
	a->next = b;
	ft_lstiter(a, print_node);
	free(b);
	free(a);
	return (0);
}
*/
