/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:27:40 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:17:46 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
Checks whether c is a 7-bit unsigned char value that fits into the ASCII
character set.
RETURN VALUE:
The values returned are nonzero if the character c falls into the tested class,
and zero if not.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
