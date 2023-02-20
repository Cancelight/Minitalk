/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:51:32 by bkiziler          #+#    #+#             */
/*   Updated: 2023/02/20 17:45:42 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

# include <signal.h>

void	sighandler1(int signum);
void	sighandler2(int signum);
void	shiftbits(int a);
void	slidebits(char c);
void	cbits(char *str);
long	ft_len(long src);
char	*ft_itoa(int n);

#endif
