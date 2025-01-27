/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:36:46 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:25:47 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*aux;

	aux = *lst;
	if (!(aux))
		return ;
	while (aux)
	{
		tmp = aux->next;
		if (del)
			del(aux->content);
		free(aux);
		aux = tmp;
	}
	*lst = NULL;
}
