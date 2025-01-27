/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:33:24 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:30:27 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
These functions convert lowercase letters to uppercase, and vice versa.
If c is an uppercase letter, tolower() returns its lowercase equivalent, if a
lowercase representation exists in the current locale. Otherwise, it returns c.
RETURN VALUE:
The value returned is that of the converted letter, or c if the conversion was
not possible.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
