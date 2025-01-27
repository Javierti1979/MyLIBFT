/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:34:32 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/08 19:42:01 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>//Liberia para usar size_t, ya que incluye la stddef.

/*
DESCRIPTION:
Scans the initial n bytes of the memory area pointed to by s for the first
instance of c.
Both c and the bytes of the memory area pointed to by s are interpreted as
unsigned char.
RETURN VALUE:
Return a pointer to the matching byte or NULL if the character does not
occur in the given memory area.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
