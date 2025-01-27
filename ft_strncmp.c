/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:34:10 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/08 19:53:39 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h> Liberia para usar size_t, incluye la stddef que es la suya

/*
DESCRIPTION:
The strcmp() function compares the two strings s1 and s2.
The comparison is done using unsigned characters.

RETURN VALUE:
The strncmp() functions return an integer less than, equal to, or greater than
zero if s1 (or the first n bytes thereof) is found, respectively, to be less
than, to match, or be greater than s2, as follows:
• 0, if the s1 and s2 are equal;
• a negative value if s1 is less than s2;
• a positive value if s1 is greater than s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
