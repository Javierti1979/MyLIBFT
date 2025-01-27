/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:36:22 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:30:10 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>//Biblioteca para el NULL

/*
DESCRIPTION:
Returns a pointer to the last occurrence of the character c in the string s.
RETURN VALUE:
Return a pointer to the matched character or NULL if the character is not found.
The terminating null byte is considered part of the string, so that if c is
specified as '\0', these functions return a pointer to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
