/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:53:40 by bkiziler          #+#    #+#             */
/*   Updated: 2023/02/20 17:46:07 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	spid;

void	slidebits(char c)
{
	int i;

	i = 0;
	while (i < 7)
	{
		if (i & 1)
		kill(spid, SIGUSR1);
		else
		kill(spid, SIGUSR2);
		c >> 1;
		i++;
	}
	usleep(55);
}

void	cbits(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		slidebits(str[i]);
}

long	ft_len(long src)
{
	int	i;

	i = 0;
	if (src == 0)
		return (1);
	if (src < 0)
		i++;
	while (src)
	{
		src /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		i;
	long	num;

	num = n;
	i = ft_len(num);
	ret = malloc(i + 1);
	if (ret == 0)
		return (0);
	if (n < 0)
	{
		num *= -1;
		ret[0] = '-';
	}
	ret[i] = 0;
	i--;
	while (i >= (n < 0))
	{
		ret[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	return (ret);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return (0);
	spid = ft_itoa(av[1]);
	cbits(av[2]);
}
