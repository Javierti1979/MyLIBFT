/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:25:56 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/09 20:17:41 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
isalpha()
Checks for an alphabetic character; in the standard "C" locale, it is equivalent
to (isupper(c) || is‐lower(c)).
In some locales, there may be additional characters for which isalpha() is
true—letters which are neither uppercase nor lowercase.
RETURN VALUE
The values returned are nonzero if the character c falls into the tested class,
and zero if not.
*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
