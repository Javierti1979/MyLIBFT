/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:34:55 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 11:35:05 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>//Liberia para usar size_t, ya que incluye la stddef.

/*
DESCRIPTION:
Compares the first n bytes (each interpreted as unsigned char) of the memory
areas s1 and s2.
RETURN VALUE:
Returns an integer less than, equal to, or greater than zero if the first
n bytes of s1 is found, respectively, to be less than, to match, or be greater
than the first n bytes of s2.

For a nonzero return value, the sign is determined by the sign of the difference
between the first pair of bytes (interpreted as unsigned char) that differ
in s1 and s2.

If n is zero, the return value is zero.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) ss1[i] != (unsigned char) ss2[i])
			return ((unsigned char)ss1[i] - (unsigned char)ss2[i]);
		i++;
	}
	return (0);
}
