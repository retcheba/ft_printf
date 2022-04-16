/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:02:01 by retcheba          #+#    #+#             */
/*   Updated: 2022/04/16 18:06:40 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	list_of_if(char c, va_list yoyo, int *Len)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(yoyo, int));
	if (c == 's')
		len += ft_putstr(va_arg(yoyo, char *));
	if (c == 'd')
		len += ft_putnbr(va_arg(yoyo, int));
	if (c == 'i')
		len += ft_putnbr(va_arg(yoyo, int));
	if (c == '%')
		len += write(1, "%", 1);
	*Len += len;
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	yoyo;

	i = 0;
	len = 0;
	va_start(yoyo, s);
	if (s)
	{
		while (s[i])
		{
			if (s[i] == '%')
				if (list_of_if(s[i + 1], yoyo, &len))
					i += 2;
			if (s[i])
			{
				len += write(1, &s[i], 1);
				i++;
			}
		}
	}
	va_end(yoyo);
	return (len);
}
