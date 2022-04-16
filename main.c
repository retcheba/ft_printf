/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:32:40 by retcheba          #+#    #+#             */
/*   Updated: 2022/04/16 18:15:46 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	main(void)
{
	int	retour;

	retour = 0;
	//ft_printf
	printf("ft_printf:\n");
	retour = ft_printf("Hello %World %c %s %d %i %u %%", 'c', "salut", -42, 42, 42);
	printf("\nretour = %d\n\n", retour);

	//printf
	printf("printf:\n");
	retour = printf("Hello %World %c %s %d %i %u %%", 'c', "salut", -42, 42, -42);
	printf("\nretour = %d\n", retour);
	return (0);
}
