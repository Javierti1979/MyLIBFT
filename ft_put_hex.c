/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:08:03 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/13 14:08:07 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//%x Imprime un número hexadecimal (base 16) en minúsculas.
//%X Imprime un número hexadecimal (base 16) en MAYUSCULAS.

static int	ft_print_hex_flag(unsigned int n, char flag)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_print_hex_flag((n / 16), flag);
		len += ft_print_hex_flag((n % 16), flag);
	}
	else if (n > 9)
	{
		if (flag == 'X')
			len += ft_putchar(n - 10 + 'A');
		else if (flag == 'x')
			len += ft_putchar(n - 10 + 'a');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}

int	ft_put_hex(unsigned int n, char format)
{
	if (n == 0)
		return (ft_putchar('0'));
	return (ft_print_hex_flag(n, format));
}
