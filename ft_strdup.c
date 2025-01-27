/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:21:52 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 18:49:12 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h> //liberia para el malloc

/*DESCRIPTION
The strdup() function returns a pointer to a new string which is a duplicate of
the strings. Memory for the new string is obtained with malloc(3), and can be
freed with free(3).

RETURN VALUE
On success, the strdup() function returns a pointer to the duplicated string.
It returns  NULL  if  insufficient memory was available, with errno set to
indicate the cause of the error.*/

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = (char *) malloc(i + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
