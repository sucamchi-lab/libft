/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:56:02 by scamlett          #+#    #+#             */
/*   Updated: 2026/04/23 21:39:02 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
int	main(void)
{
	t_list *a;
	t_list *b;
	t_list *c;

	a = ft_lstnew(ft_strdup("a"));
	b = ft_lstnew(ft_strdup("b"));
	c = ft_lstnew(ft_strdup("c"));
	a->next = b;
	b->next = c;
	t_list *mapped = ft_lstmap(a, ft_strdup, free);
	while (mapped)
	{
		printf("%s", (char *)mapped->content);
		mapped = mapped->next;
	}
	ft_lstclear(&a, free);
	ft_lstclear(&mapped, free);
}*/