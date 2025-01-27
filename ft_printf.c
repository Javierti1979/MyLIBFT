/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-val <jdel-val@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:29:22 by jdel-val          #+#    #+#             */
/*   Updated: 2024/10/11 16:44:37 by jdel-val         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
%c Imprime un solo carácter.
%s Imprime una string (como se define por defecto en C).
%p El puntero void * dado como argumento se imprime en formato hexadecimal.
%d Imprime un número decimal (base 10).
%i Imprime un entero en base 10.
%u Imprime un número decimal (base 10) sin signo.
%x Imprime un número hexadecimal (base 16) en minúsculas.
%X Imprime un número hexadecimal (base 16) en MAYUSCULAS.
% % para imprimir el símbolo del porcentaje.

BONUS
Gestiona cualquier combinación de los siguientes flags: ’-0.’ y el ancho mínimo
(field minimum width) bajo todas las conversiones posibles.
Gestiona todos los siguientes flags: ’# +’ (sí, uno de ellos es un espacio).
*/

int	ft_checkformat(va_list args, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_putptr_hex(va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_put_un_nbr(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_put_hex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	if (str == NULL)
		return (0);
	va_start (args, str);
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			printed += ft_putchar(str[i]);
		else
		{
			i++;
			if (str[i] == '\0')
				break ;
			printed += ft_checkformat(args, str[i]);
		}
		i++;
	}
	va_end (args);
	return (printed);
}
