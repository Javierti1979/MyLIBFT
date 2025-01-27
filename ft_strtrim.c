/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:28:27 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/08 20:05:29 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>//Biblioteca para el size_t.
//#include <stdint.h>//Para SIZE_MAX.
//#include <stdlib.h>//Para malloc

static int	compare_flag(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*str_final(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1 [i + start];
		i++;
	}
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (compare_flag(set, s1[i]))
		i++;
	while (compare_flag(set, s1[j]))
		j--;
	len = j - (i -1);
	if (len <= 0 || i >= ft_strlen(s1))
		return (ft_strdup(""));
	return (str_final(s1, i, len));
}
