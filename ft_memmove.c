/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:31:39 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/08 19:42:43 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>//Liberia para usar size_t, ya que incluye la stddef.

/*
DESCRIPTION:
copies n bytes from memory area src to memory area dest.
The memory areas may over‐lap: copying takes place as though the bytes in src
are first copied into a temporary array that does not overlap src or dest, and
the bytes are then copied from the temporary array to dest.

RETURN VALUE:
The memmove() function returns a pointer to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}
