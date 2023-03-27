/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:48:26 by rocio             #+#    #+#             */
/*   Updated: 2023/03/27 18:24:43 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//la defino para indicar si el programa debe seguir continuando o no.
int	g_signal_run = 1;

void	character_creator_by_bits(int bit)
{
	static int	character;
	static int	numbers_bit;

	if (bit == SIGUSR1)
	{
		character = character | (1 << numbers_bit);
	}
	numbers_bit++;
	if (numbers_bit == 8)
	{
		ft_printf("%c", character);
		character = 0;
		numbers_bit = 0;
	}
}

//cuando se pulsa control + c cambía el valor y se cierra el programa.
void	controller_sigint(int sig)
{
	(void) sig;
	g_signal_run = 0;
}

int	main(void)
{
	signal(SIGINT, controller_sigint);
	ft_printf("El PID es: %d \n", getpid());
	while (g_signal_run)
	{
		signal(SIGUSR1, character_creator_by_bits);
		signal(SIGUSR2, character_creator_by_bits);
		pause();
	}
	return (0);
}
