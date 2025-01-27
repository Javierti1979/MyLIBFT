/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:37:27 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 16:54:30 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

t_list	*create_new_node(t_list *lst, void *(*f)(void *))
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = f(lst->content);
	if (!new_node->content)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

void	add_node_to_list(t_list **new_list, t_list **aux, t_list *new_node)
{
	if (!*new_list)
	{
		*new_list = new_node;
		*aux = new_node;
	}
	else
	{
		(*aux)->next = new_node;
		*aux = new_node;
	}
}

t_list	*build_new_list(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*aux;
	t_list	*new_node;

	new_list = NULL;
	aux = NULL;
	while (lst)
	{
		new_node = create_new_node(lst, f);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		add_node_to_list(&new_list, &aux, new_node);
		lst = lst->next;
	}
	return (new_list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f)
		return (NULL);
	return (build_new_list(lst, f, del));
}
