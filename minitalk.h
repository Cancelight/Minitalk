/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:51:32 by bkiziler          #+#    #+#             */
/*   Updated: 2023/02/25 20:49:48 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <signal.h>
# include "./ft_printf/ft_printf.h"

void	shiftbits(int a);
void	slidebits(char c);
void	cbits(char *str);
int		ft_atoi(const char *str);

#endif
