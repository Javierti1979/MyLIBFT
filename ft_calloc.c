/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:03:24 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:16:59 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stddef.h>//Biblioteca para el size_t.
//#include <stdint.h>//Para SIZE_MAX.
//#include <stdlib.h>//Para malloc

/*
DESCRIPTION
The  calloc()  function  allocates  memory  for  an  array of nmemb elements of
size bytes each and returns a pointer to the allocated memory.
The memory is set to zero.  If nmemb or size is 0,  then  calloc()  returns
either NULL, or a unique pointer value that can later be successfully passed to
free(). If the multiplication of nmemb and size would result in integer
overflow, then calloc() returns an error. By contrast, an integer  overflow
would not be detected in the following call to malloc(), with the result that an
incorrectly sized block of memory would be allocated:

malloc(nmemb * size);

RETURN VALUE
The malloc() and calloc() functions return a pointer to the allocated memory,
which is suitably  aligned for any built-in type.
On error, these functions return NULL.  NULL may also be returned by a
successful call to malloc() with a size of zero, or by a successful call to
calloc() with nmemb or size equal to zero.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			total;
	size_t			i;

	if ((nmemb > SIZE_MAX / size))
		return (NULL);
	total = nmemb * size;
	tmp = malloc(total);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < total)
		tmp[i++] = 0;
	return (tmp);
}
