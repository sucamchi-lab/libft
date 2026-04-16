/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:06:00 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:06:06 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstclear_newlist(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!f || !del)
	{
		return (NULL);
	}
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear_newlist(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>

static void	*dup_content(void *p)
{
	return (ft_strdup((char *)p));
}

static void	del(void *p)
{
	free(p);
}

int main(void)
{
	t_list *a = ft_lstnew(ft_strdup("hola"));
	t_list *mapped = ft_lstmap(a, dup_content, del);
	printf("mapped: %s\n", (char *)mapped->content);
	ft_lstclear(&a, del);
	ft_lstclear(&mapped, del);
	return (0);
}
*/
