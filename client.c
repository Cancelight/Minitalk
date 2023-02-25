/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:53:40 by bkiziler          #+#    #+#             */
/*   Updated: 2023/02/25 20:52:18 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	g_spid;

void	slidebits(char c)
{
	int	i;

	i = 0;
	while (i <= 7)
	{
		if (c & 1)
			kill(g_spid, SIGUSR1);
		else
			kill(g_spid, SIGUSR2);
		c = c >> 1;
		i++;
		usleep(100);
	}
}

void	cbits(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		slidebits(str[i++]);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	g_spid = ft_atoi(av[1]);
	cbits(av[2]);
}
