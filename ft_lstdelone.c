/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scamlett <scamlett@student.42malaga.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 21:05:39 by scamlett          #+#    #+#             */
/*   Updated: 2026/03/28 21:05:45 by scamlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>

static void	del(void *p)
{
	free(p);
}

int main(void)
{
	char *s = ft_strdup("hola");
	t_list *node = ft_lstnew(s);
	ft_lstdelone(node, del);
	printf("Nodo liberado correctamente\n");
	return (0);
}
*/
