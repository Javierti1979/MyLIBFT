/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:33:46 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:29:06 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//df#include <stddef.h>// biblioteca para uso de NULL

/*
DESCRIPTION:
Returns a pointer to the first occurrence of the character c in the string s.
RETURN VALUE:
Return a pointer to the matched character or NULL if the character is not found.
The terminating null byte is considered part of the string, so that if c is
specified as '\0', these functions return a pointer to the terminator.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
