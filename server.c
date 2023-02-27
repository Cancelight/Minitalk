/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:03:40 by bkiziler          #+#    #+#             */
/*   Updated: 2023/02/25 20:55:16 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	shiftbits(int a)
{
	static char	i;
	static int	k;

	if (a == SIGUSR1)
		i |= (1 << k);
	k++;
	if (k == 8)
	{
		ft_printf("%c", i);
		i = 0;
		k = 0;
	}
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	signal(SIGUSR1, shiftbits);
	signal(SIGUSR2, shiftbits);
	while (1)
	{
		pause();
	}
}
