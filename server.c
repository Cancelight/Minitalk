/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:03:40 by bkiziler          #+#    #+#             */
/*   Updated: 2023/02/20 17:40:25 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static char	i;

void	sighandler1(int signum)
{
	shiftbits(1);
}

void	sighandler2(int signum)
{
	shiftbits(0);
}

void	shiftbits(int a)
{
	static int	k;

	while (k < 7)
	{
		if (a == 0)
			i |= 0;
		else if (a == 1)
			i |= 1;
		i << 1;
		k++;
	}
	if (k == 7)
	{
		ft_printf("%c", i);
		i = 0;
		k = 0;
	}
}

int	main(void)
{
	ft_printf("%d", getpid());
	signal(SIGUSR1, sighandler1);
	signal(SIGUSR2, sighandler2);
}
