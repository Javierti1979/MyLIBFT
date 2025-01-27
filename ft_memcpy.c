/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:31:15 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 19:39:59 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>//liberia necesaria para usar size_t.

/*
DESCRIPTION:
Copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.
Use memmove(3) if the memory areas do overlap.
RETURN VALUE:
The memcpy() function returns a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	while (n--)
		*d++ = *s++;
	return (dest);
}
