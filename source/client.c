/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocio <rocio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:51:27 by rocio             #+#    #+#             */
/*   Updated: 2023/03/27 18:24:58 by rocio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit_to_server(char *string, int number_pid, size_t length)
{
	size_t	counter;
	int		numbers_bits;

	counter = 0;
	while (counter < length)
	{
		numbers_bits = 0;
		while (numbers_bits < 8)
		{
			if ((string[counter] >> numbers_bits) & 1)
				kill(number_pid, SIGUSR1);
			else
				kill(number_pid, SIGUSR2);
			usleep(150);
			numbers_bits++;
		}
		counter++;
	}
}

int	main(int argc, char **argv)
{
	char	*string;
	int		pid;

	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		string = argv[2];
		send_bit_to_server(string, pid, ft_strlen(string));
		send_bit_to_server("\n", pid, ft_strlen("\n"));
	}
	else
		ft_printf("Sólo escriba el PID y el mensaje como argumentos \n");
}
