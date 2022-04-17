/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:32:40 by retcheba          #+#    #+#             */
/*   Updated: 2022/04/17 20:03:21 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int	retour;
	int	ptr = 0;

	retour = 0;
	//ft_printf
	printf("ft_printf:\n");
	retour = ft_printf(" %X ", -420420);
	printf("\nretour = %d\n\n", retour);

	//printf
	printf("printf:\n");
	retour = printf(" %X ", -420420);
	printf("\nretour = %d\n", retour);
	return (0);
}
