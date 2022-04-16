/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:12:00 by retcheba          #+#    #+#             */
/*   Updated: 2022/04/16 16:39:16 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	write_positive(long int nb)
{
	int		i;
	int		len;
	char	temp;
	char	tab[12];

	i = 0;
	while (nb > 0)
	{
		tab[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	len = i;
	while (i > 0)
	{
		i--;
		temp = tab[i];
		write(1, &temp, 1);
	}
	return (len);
}

int	ft_putnbr(int n)
{
	long int	nb;
	int			len;

	nb = n;
	len = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		len++;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		len++;
	}
	if (nb > 0)
		len += write_positive(nb);
	return (len);
}
