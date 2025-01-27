/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:32:36 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/08 19:45:16 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>//Para uso de size_t.

/*
DESCRIPTION:
The strlcpy() and strlcat() functions copy and concatenate strings respectively.
Strlcpy() and strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-ter‐minate the result (as long as size is larger than 0 or,
in the case of strlcat(), as long as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size.
Also note that strlcpy() and strlcat() only operate on true “C” strings.
This means that for strlcpy() src must be NUL-terminated and for strlcat() both
src and dst must be NUL-terminated.
The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.


RETURN VALUE:
The strlcpy() and strlcat() functions return the total length of the string they
tried to create. For strlcat() that means the initial length of dst plus the
length of src. While this may seem somewhat confusing, it was done to make
truncation detection simple.

Note, however, that if strlcat traverses size characters without finding a NUL,
the length of the string is considered to be size and the destination string
will not be NUL-terminated (since there was no space for the NUL).
This keeps strlcat() from running off the end of a string.
In practice this should not happen (as it means that either size is incorrect or
that dst is not a proper “C” string). The check exists to prevent potential
security problems in incorrect code.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lonsrc;
	size_t	londst;
	size_t	i;

	lonsrc = 0;
	londst = 0;
	i = 0;
	while (dst[londst] != '\0' && londst < size)
		londst++;
	while (src[lonsrc] != '\0')
		lonsrc++;
	if (londst == size)
		return (size + lonsrc);
	while (src[i] != '\0' && (londst + i + 1) < size)
	{
		dst[londst + i] = src[i];
		i++;
	}
	dst[londst + i] = '\0';
	return (londst + lonsrc);
}
