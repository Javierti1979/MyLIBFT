/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:32:56 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/08 19:47:22 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
These functions convert lowercase letters to uppercase, and vice versa.
If c is a lowercase letter, toupper() returns its uppercase equivalent, if an
uppercase representation exists in the current locale.
Otherwise, it returns c.
RETURN VALUE:
The value returned is that of the converted letter, or c if the conversion was
not possible.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
