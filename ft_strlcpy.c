/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:32:16 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/08 19:51:00 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>//Biblioteca del size_t.

/*
DESCRIPTION:
The strlcpy() and strlcat() functions copy and concatenate strings respectively.
Strlcpy()take the full size of the buffer (not just the length) and guarantee to
NUL-terminate the result (as long as size is larger than 0).
Note that a byte for the NUL should be included in size.
Also note that strlcpy() only operate on true “C” strings.
This means that for strlcpy() src must be NUL-terminated.
The strlcpy() function copies up to size -1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.

RETURN VALUE:
The strlcpy() return the total length of the string they tried to create.
For strlcpy() that means the length of src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst [i] = '\0';
	return (len);
}
