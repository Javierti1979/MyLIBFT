/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:27:05 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:17:26 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION:
Checks for an alphanumeric character; it is equivalent to (isalpha(c) ||
isdigit(c)).
RETURN VALUE:
The values returned are nonzero if the character c falls into the tested class,
and zero if not.
*/

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
