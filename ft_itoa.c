/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:29:20 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:18:16 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>//Para NULL.
//#include <stdlib.h>//Para Malloc

int	int_len(long nbr)
{
	int	leng;

	leng = 0;
	if (nbr < 0)
	{
		leng++;
		nbr = -nbr;
	}
	if (nbr == 0)
		leng++;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		leng++;
	}
	return (leng);
}

char	*pre(int len, int n)
{
	char	*pre;

	pre = malloc((len + 1) * sizeof(char));
	if (!pre)
		return (NULL);
	if (n < 0)
		pre[0] = '-';
	else
		pre[0] = '0';
	pre[len] = '\0';
	return (pre);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	result = pre(len, n);
	i = len -1;
	if (!result)
		return (NULL);
	if (n < 0)
		nbr = -nbr;
	while (nbr != 0)
	{
		result[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	return (result);
}
