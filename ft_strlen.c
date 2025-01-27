/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:29:20 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/08 19:45:44 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>//libreria necesaria para usar size_t

/*
DESCRIPTION:
Calculates  the length of the string pointed to by s, excluding the terminating
null byte ('\0').
RETURN VALUE:
Returns the number of bytes in the string pointed to by s.
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
