/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:07:03 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/13 14:07:08 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//%p El puntero void * dado como argumento se imprime en formato hexadecimal.

static int	ft_print_hex(unsigned long long n)
{
	int	len;

	len = 0;
	if (n >= 16)
	{
		len += ft_print_hex((n / 16));
		len += ft_print_hex((n % 16));
	}
	else if (n > 9)
		len += ft_putchar(n - 10 + 'a');
	else
		len += ft_putchar(n + '0');
	return (len);
}

int	ft_putptr_hex(unsigned long long n)
{
	if (n == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_print_hex(n) + 2);
}
